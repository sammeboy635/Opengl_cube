
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <unistd.h>
#include <stdlib.h>

#include "processing/cube.h"
#include "processing/vert.h"
#include "util/list.h"
#include "config/config.h"

void keyCallback(GLFWwindow *window, int key, int scancode, int action, int mods);
void DrawCube(GLfloat centerPosX, GLfloat centerPosY, GLfloat centerPosZ, GLfloat edgeLength);

GLfloat rotationX = 0.0f;
GLfloat rotationY = 0.0f;

GLfloat X;
GLfloat Y;

double px;
double py;

Vert *vert;

void *myThreadFun(void *vargp)
{
	//sleep(1);
	printf("Printing GeeksQuiz from Thread \n");
	return NULL;
}

void controls(GLFWwindow *window, int key, int scancode, int action, int mods)
{
	if (action == GLFW_PRESS | action == GLFW_REPEAT)
		if (key == GLFW_KEY_ESCAPE)
			glfwSetWindowShouldClose(window, GL_TRUE);
	if (glfwGetKey(window, GLFW_KEY_W))
	{
		if (Y < SCREEN_H)
			Y += Move_Speed;
	}
	if (glfwGetKey(window, GLFW_KEY_S))
	{
		if (Y > 0)
			Y -= Move_Speed;
	}
	if (glfwGetKey(window, GLFW_KEY_A))
	{
		if (X > 0)
			X -= Move_Speed;
	}
	if (glfwGetKey(window, GLFW_KEY_D))
	{
		if (X < SCREEN_W)
			X += Move_Speed;
	}
	if (glfwGetKey(window, GLFW_KEY_SPACE))
	{
		vert_add(vert, px, py, -500);
	}
	if (glfwGetKey(window, GLFW_KEY_1))
	{
		vert_clear(vert->vertices);
		vert->total = 0;
	}
	if (glfwGetKey(window, GLFW_KEY_2))
	{
		vert_gen(vert, 10, SCREEN_WIDTH, SCREEN_HEIGHT);
	}
	if (glfwGetKey(window, GLFW_KEY_3))
	{
		vert_gen(vert, 0, SCREEN_WIDTH, SCREEN_HEIGHT);
	}
	if (glfwGetKey(window, GLFW_KEY_4))
	{
		vert_add_rectangle(vert, 200, 200, -500, 500, 400, -500);
	}
	if (glfwGetKey(window, GLFW_KEY_0))
	{
		char debug[100];
		glfwGetCursorPos(window, &px, &py);
		sprintf(debug, "%f", px);
		puts(debug);
	}
}

void mouse_input(GLFWwindow *window, double xpos, double ypos)
{
	px = xpos;
	py = abs(ypos - SCREEN_HEIGHT);
}

void DrawOther(int size, int *vertices)
{

	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE); //Change to GL_Line GL_FILL
	glColor3f(1, 1, 1);
	glEnableClientState(GL_VERTEX_ARRAY);
	glVertexPointer(3, GL_INT, 0, vertices);
	glDrawArrays(GL_QUADS, 0, size);
	glDisableClientState(GL_VERTEX_ARRAY);
	//sleep(.1);
}

int main(void)
{
	GLFWwindow *window;

	// Initialize the library
	if (!glfwInit())
	{
		return -1;
	}

	// Create a windowed mode window and its OpenGL context
	window = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Hello World", NULL, NULL);

	//glfwSetKeyCallback(window, keyCallback);
	glfwSetInputMode(window, GLFW_STICKY_KEYS, 1);
	glfwSetKeyCallback(window, controls);

	int screenWidth, screenHeight;
	glfwGetFramebufferSize(window, &screenWidth, &screenHeight);

	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	// Make the window's context current
	glfwMakeContextCurrent(window);

	glViewport(0.0f, 0.0f, screenWidth, screenHeight);	 // specifies the part of the window to which OpenGL will draw (in pixels), convert from normalised to pixels
	glMatrixMode(GL_PROJECTION);						 // projection matrix defines the properties of the camera that views the objects in the world coordinate frame. Here you typically set the zoom factor, aspect ratio and the near and far clipping planes
	glLoadIdentity();									 // replace the current matrix with the identity matrix and starts us a fresh because matrix transforms such as glOrpho and glRotate cumulate, basically puts us at (0, 0, 0)
	glOrtho(0, SCREEN_WIDTH, 0, SCREEN_HEIGHT, 0, 1000); // essentially set coordinate system
	glMatrixMode(GL_MODELVIEW);							 // (default matrix mode) modelview matrix defines how your objects are transformed (meaning translation, rotation and scaling) in your world
	glLoadIdentity();									 // same as above comment
	glfwSwapInterval(1);								 // Sets the frames per second

	//Cursor Items
	GLFWcursor *cursor = glfwCreateStandardCursor(GLFW_ARROW_CURSOR); //creates the cursor to show
	glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_NORMAL);		  //sets the Cursor and the cursor to show.
	glfwSetCursor(window, cursor);									  //sets the cursor to be used for the window
	glfwSetCursorPosCallback(window, mouse_input);					  //Sets a function to call when cursor is on screen.

	X = SCREEN_WIDTH / 2;
	Y = SCREEN_HEIGHT / 2;

	vert = vert_init(CUBE_SIZE);

	// Loop until the user closes the window
	while (!glfwWindowShouldClose(window))
	{
		glClear(GL_COLOR_BUFFER_BIT);

		// Render OpenGL here

		glPushMatrix();
		glTranslatef(X, Y, -500);
		glRotatef(rotationX, 1, 0, 0);
		glRotatef(rotationY, 0, 1, 0);
		glTranslatef(-X, -Y, 500);

		DrawOther(vert->total, vert->vertices);
		//vertIndex = 0;
		//X = X + 2;
		//Y = Y + 2;
		//mouse_input(window);
		glPopMatrix();

		// Swap front and back buffers
		glfwSwapBuffers(window);

		// Poll for and process events
		//glfwPollEvents();
		glfwWaitEvents();
	}

	glfwTerminate();

	return 0;
}

void keyCallback(GLFWwindow *window, int key, int scancode, int action, int mods)
{
	//std::cout << key << std::endl;

	const GLfloat rotationSpeed = 10;

	// actions are GLFW_PRESS, GLFW_RELEASE or GLFW_REPEAT
	if (action == GLFW_PRESS || action == GLFW_REPEAT)
	{
		switch (key)
		{
		case GLFW_KEY_UP:
			rotationX -= rotationSpeed;
			break;
		case GLFW_KEY_DOWN:
			rotationX += rotationSpeed;
			break;
		case GLFW_KEY_RIGHT:
			rotationY += rotationSpeed;
			break;
		case GLFW_KEY_LEFT:
			rotationY -= rotationSpeed;
			break;
		}
	}
}

void DrawCube(GLfloat centerPosX, GLfloat centerPosY, GLfloat centerPosZ, GLfloat edgeLength)
{
	GLfloat halfSideLength = edgeLength * 0.5f;

	GLfloat vertices[] =
		{
			// front face
			centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
			centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top right
			centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom right
			centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom left

			// back face
			centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top left
			centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
			centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
			centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom left

			// left face
			centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
			centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
			centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
			centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom left

			// right face
			centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
			centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
			centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
			centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // bottom left

			// top face
			centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // top left
			centerPosX - halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // top right
			centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ - halfSideLength, // bottom right
			centerPosX + halfSideLength, centerPosY + halfSideLength, centerPosZ + halfSideLength, // bottom left

			// top face
			centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength, // top left
			centerPosX - halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // top right
			centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ - halfSideLength, // bottom right
			centerPosX + halfSideLength, centerPosY - halfSideLength, centerPosZ + halfSideLength  // bottom left
		};

	//printf("%f \n", vertices[0]);
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
	//glColor3f( colour[0], colour[1], colour[2] );
	glEnableClientState(GL_VERTEX_ARRAY);
	glVertexPointer(3, GL_FLOAT, 0, vertices);
	//gluLookAt(0, 0, 0, 0, 0, 0, 0, 0, 0);
	glDrawArrays(GL_QUADS, 0, 24);
	glDisableClientState(GL_VERTEX_ARRAY);
}