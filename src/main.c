#include <unistd.h>
#include <stdlib.h>

#include "processing/cube.h"
#include "util/list.h"
#include "config/config.h"
#include "util/screen.h"
#include "main.h"

Window *w; //Global storage var
int dir;

static const char *fragment_shader_text =
	"#version 440\n"
	"in vec3 vs_position;\n"
	"in vec3 vs_color;\n"
	"\n" // in vec2 vs_texcoord;
	"out vec4 fs_color;\n"
	"void main()\n"
	"{\n"
	"fs_color = vec4(vs_color, 1.f);\n"
	"}\n";

static const char *vertex_shader_text =
	"#version 440\n"
	"layout (location = 0) in vec3 vertex_position;\n"
	"layout (location = 1) in vec3 vertex_color;\n"
	"\n" //layout (location = 2) in vec2 vertex_texcoords;
	"out vec3 vs_position;\n"
	"out vec3 vs_color;\n"
	"\n" // out vec2 vs_texcoord;
	"void main()\n"
	"{\n"
	"vs_position = vertex_position;\n"
	"vs_color = vertex_color;\n"
	"\n" //vs_texcoord = vertex_texcoords;

	"gl_Position = vec4(vertex_position,1.f);\n"
	"}\n";

int main(void)
{
	dir = -1;
	window_init(); //Sets a function to call when cursor is on screen.
	//window_program_init(); // testing
	while (!glfwWindowShouldClose(w->window))
	{
		window_main_loop();
		//window_main_loop_shader();
		if (dir == -1)
		{
			screen_procces_array_down();
		}
		else if (dir == 1)
		{
			screen_procces_array_up();
		}

		//screen_process_list();
		//window_timed_events();
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

	//testing
	cube_set_xyz(w->scr->cc, 5, 5, ZZ);
	int quad[12];
	int index = 0;
	cube_vert_cpy(w->scr->cc, 4, quad, &index);
	index = 0;
	for (int i = 1; i <= 4; i++)
	{
		w->scr->verts[0 * i] = quad[index++];
		w->scr->verts[1 * i] = quad[index++];
		w->scr->verts[2 * i] = quad[index++];
		w->scr->verts[3 * i] = 1;
		w->scr->verts[4 * i] = 1;
		w->scr->verts[5 * i] = 1;
	}
	//end testing
}
GLFWwindow *window_create_GLFW()
{
	GLFWwindow *window;

	if (!glfwInit())
	{
		exit(0);
	}

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);

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
	glfwSetKeyCallback(window, window_keyboard_controls);		   //Keyboard keycall back
	glfwSetWindowSizeCallback(window, window_size_callback);	   //Window Size call back
	glfwSetMouseButtonCallback(window, window_mouse_button_input); //Mouse button call back
	return window;
}
void window_program_init()
{
	GLuint vertex_buffer, vertex_shader, fragment_shader, program;
	GLint col_location, vpos_location; //tex_location;

	/*glGenBuffers(1, &vertex_buffer);
	glBindBuffer(GL_ARRAY_BUFFER, vertex_buffer);
	glBufferData(GL_ARRAY_BUFFER, sizeof(w->scr->verts), w->scr->verts, GL_STATIC_DRAW); //sizeof(vertices)
*/
	vertex_shader = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(vertex_shader, 1, &vertex_shader_text, NULL);
	glCompileShader(vertex_shader);

	fragment_shader = glCreateShader(GL_FRAGMENT_SHADER);
	glShaderSource(fragment_shader, 1, &fragment_shader_text, NULL);
	glCompileShader(fragment_shader);

	w->program.program = glCreateProgram();
	glAttachShader(w->program.program, vertex_shader);
	glAttachShader(w->program.program, fragment_shader);
	glLinkProgram(w->program.program);

	vpos_location = glGetAttribLocation(w->program.program, "vs_position");
	col_location = glGetUniformLocation(w->program.program, "vs_color");
	//tex_location = glGetAttribLocation(w->program.program, "vs_texcoord");

	glEnableVertexAttribArray(vpos_location);
	glVertexAttribPointer(vpos_location, 3, GL_FLOAT, GL_FALSE,
						  sizeof(w->scr->verts[0]), (void *)0);
	glEnableVertexAttribArray(col_location);
	glVertexAttribPointer(col_location, 3, GL_FLOAT, GL_FALSE,
						  sizeof(w->scr->verts[0]), (void *)(sizeof(float) * 3));
}
void window_timed_events()
{
	float now = glfwGetTime();
	if (now - w->lastTime > .5f)
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
	glfwPollEvents();
	//glfwWaitEvents();
}
void window_main_loop_shader()
{
	glClear(GL_COLOR_BUFFER_BIT);
	//glUseProgram(w->program.program);

	glDrawArrays(GL_QUADS, 0, 4);

	glfwSwapBuffers(w->window);
	glfwPollEvents();
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
void window_mouse_button_input(GLFWwindow *win, int button, int action, int mods)
{
	if (action == GLFW_PRESS)
	{
		if (button == GLFW_MOUSE_BUTTON_RIGHT)
		{
		}
		else if (button == GLFW_MOUSE_BUTTON_LEFT)
		{
			screen_add_sqaure(w->mpos.x, w->mpos.y);
		}
	}
}
void window_keyboard_controls(GLFWwindow *window, int key, int scancode, int action, int mods)
{
	if (action == GLFW_PRESS | action == GLFW_REPEAT)
		if (key == GLFW_KEY_ESCAPE)
			glfwSetWindowShouldClose(window, GL_TRUE);
	if (glfwGetKey(window, GLFW_MOUSE_BUTTON_LEFT))
	{
		screen_add_sqaure(w->mpos.x, w->mpos.y);
	}
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
		dir = -1;
		//glfwGetCursorPos(window, &px, &py);
		sprintf(debug, "%d", w->mpos.x);
		puts(debug);
	}
	if (glfwGetKey(window, GLFW_KEY_0))
	{
		char debug[100];
		//glfwGetCursorPos(window, &px, &py);
		dir = 1;
		sprintf(debug, "%d", w->scr->vertIndex);
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