#include <unistd.h>
#include <stdlib.h>

#include "processing/cube.h"
#include "util/list.h"
#include "config/config.h"
#include "util/screen.h"
#include "main.h"

Window *w; //Global storage var

int main(void)
{

	window_init(); //Sets a function to call when cursor is on screen.
	while (!glfwWindowShouldClose(w->window))
	{
		window_main_loop();
		screen_process_list();
	}
	window_terminate();
}

void window_init()
{
	//init all the glfw and window things
	w = (Window *)calloc(1, sizeof(Window));
	w->window = window_create_GLFW();

	//Sets movement in the middle of the screen
	w->player.x = SCREEN_WIDTH / 2;
	w->player.y = SCREEN_HEIGHT / 2;
	w->scr = screen_init();
}
GLFWwindow *window_create_GLFW()
{
	GLFWwindow *window;

	if (!glfwInit())
	{
		exit(0);
	}

	window = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Cube World", NULL, NULL);

	glfwGetFramebufferSize(window, &w->wsize.width, &w->wsize.height);

	if (!window)
	{
		glfwTerminate();
		exit(0);
	}

	// Make the window's context current
	glfwMakeContextCurrent(window);
	glViewport(0.0f, 0.0f, w->wsize.width, w->wsize.height); // specifies the part of the window to which OpenGL will draw (in pixels), convert from normalised to pixels
	glMatrixMode(GL_PROJECTION);							 // projection matrix defines the properties of the camera that views the objects in the world coordinate frame. Here you typically set the zoom factor, aspect ratio and the near and far clipping planes
	glLoadIdentity();										 // replace the current matrix with the identity matrix and starts us a fresh because matrix transforms such as glOrpho and glRotate cumulate, basically puts us at (0, 0, 0)
	glOrtho(0, SCREEN_WIDTH, 0, SCREEN_HEIGHT, 0, 1000);	 // essentially set coordinate system
	glMatrixMode(GL_MODELVIEW);								 // (default matrix mode) modelview matrix defines how your objects are transformed (meaning translation, rotation and scaling) in your world
	glLoadIdentity();										 // same as above comment
	glfwSwapInterval(1);									 // Sets the frames per second

	//Cursor Items
	GLFWcursor *cursor = glfwCreateStandardCursor(GLFW_ARROW_CURSOR); //creates the cursor to show
	glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);		  //sets the Cursor and the cursor to show.
	glfwSetCursor(window, cursor);									  //sets the cursor to be used for the window
	glfwSetCursorPosCallback(window, window_mouse_input);			  //Sets a function to call when cursor is on screen.

	//glfwSetInputMode(window, GLFW_STICKY_KEYS, 1);
	glfwSetKeyCallback(window, window_keyboard_controls);	 //Keyboard keycall back
	glfwSetWindowSizeCallback(window, window_size_callback); //Window Size call back
	return window;
}
void window_timed_events()
{
	float now = glfwGetTime();
	if (now - w->lastTime > 2.0f)
	{
		screen_process_list();
		w->lastTime = now;
	}
}
void window_main_loop()
{
	glClear(GL_COLOR_BUFFER_BIT); // Render OpenGL here

	glPushMatrix();
	glTranslatef(w->player.x, w->player.y, -500);
	glRotatef(0, 1, 0, 0);
	glRotatef(0, 0, 1, 0);
	glTranslatef(-w->player.x, -w->player.y, 500);
	window_draw_cubes(w->scr->totalQuads, w->scr->verts);
	glPopMatrix();

	// Swap front and back buffers
	glfwSwapBuffers(w->window);

	// Poll for and process events
	//glfwPollEvents();
	glfwWaitEvents();
}
void window_draw_cubes(int totalCubes, int *arrayVertices)
{
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE); //Change to GL_Line GL_FILL
	glColor3f(1, 1, 1);
	glEnableClientState(GL_VERTEX_ARRAY);
	glVertexPointer(3, GL_INT, 0, arrayVertices);
	glDrawArrays(GL_QUADS, 0, totalCubes);
	glDisableClientState(GL_VERTEX_ARRAY);
	//sleep(.1);
}
void window_mouse_input(GLFWwindow *win, double xpos, double ypos)
{
	if (xpos > SCREEN_MIN_HEIGHT & xpos < SCREEN_WIDTH)
	{
		w->mpos.x = xpos;
		w->mpos.x = w->mpos.x - (w->mpos.x % CUBE_SIZE); //clamping input
	}
	if (ypos > SCREEN_MIN_HEIGHT & ypos < SCREEN_HEIGHT)
	{
		w->mpos.y = abs((int)(ypos - SCREEN_HEIGHT));
		w->mpos.y = w->mpos.y - (w->mpos.y % CUBE_SIZE); //clamping input
	}
}
void window_keyboard_controls(GLFWwindow *window, int key, int scancode, int action, int mods)
{
	if (action == GLFW_PRESS | action == GLFW_REPEAT)
		if (key == GLFW_KEY_ESCAPE)
			glfwSetWindowShouldClose(window, GL_TRUE);
	if (glfwGetKey(window, GLFW_KEY_W))
	{
		if (w->player.y < SCREEN_H)
			w->player.y += Move_Speed;
	}
	if (glfwGetKey(window, GLFW_KEY_S))
	{
		if (w->player.y > 0)
			w->player.y -= Move_Speed;
	}
	if (glfwGetKey(window, GLFW_KEY_A))
	{
		if (w->player.x > 0)
			w->player.x -= Move_Speed;
	}
	if (glfwGetKey(window, GLFW_KEY_D))
	{
		if (w->player.x < SCREEN_W)
			w->player.x += Move_Speed;
	}
	if (glfwGetKey(window, GLFW_KEY_SPACE))
	{

		screen_add_sqaure(w->mpos.x, w->mpos.y);
	}
	if (glfwGetKey(window, GLFW_KEY_1))
	{
		screen_clear();
		w->scr->totalQuads = 0;
	}
	if (glfwGetKey(window, GLFW_KEY_2))
	{
	}
	if (glfwGetKey(window, GLFW_KEY_3))
	{
	}
	if (glfwGetKey(window, GLFW_KEY_4))
	{
	}
	if (glfwGetKey(window, GLFW_KEY_9))
	{
		char debug[100];
		//glfwGetCursorPos(window, &px, &py);
		sprintf(debug, "%d", w->mpos.x);
		puts(debug);
	}
	if (glfwGetKey(window, GLFW_KEY_0))
	{
		char debug[100];
		//glfwGetCursorPos(window, &px, &py);
		sprintf(debug, "%d", w->mpos.y);
		puts(debug);
	}
}
void window_size_callback(GLFWwindow *window, int width, int height)
{
	w->wsize.width = width;
	w->wsize.height = height;
}
void window_terminate()
{
	screen_free(w->scr); //free the screen
	free(w);			 //free the global
	glfwTerminate();	 //end function for glfw
}