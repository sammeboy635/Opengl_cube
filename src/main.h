#pragma once
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "util/list.h"
#include "util/screen.h"
typedef struct Mouse //Holds the mouse positions
{
	int x;
	int y;
} Mouse;
typedef struct Screenxy //Holds the screen width and screen size and gets updated when size changes
{
	int width;
	int height;
} Screenxy;
typedef struct Player //Holds the keyboard movement positions
{
	int x;
	int y;
} Player;
typedef struct Window //Main storage for all vars
{
	GLFWwindow *window;
	Mouse mpos;
	Screenxy wsize;
	//t_list memory;
	Player player;
	Screen *scr;
	float lastTime;
} Window;

void window_init(); //Main window init
GLFWwindow *window_create_GLFW();
void window_timed_events();																	 // Sets all the callbacks and variables for glfw.
void window_main_loop();																	 //Display loop meant to be in a while loop
void window_draw_cubes(int totalCubes, int *arrayVertices);									 //Drawcall
void window_mouse_input(GLFWwindow *win, double xpos, double ypos);							 //mouseinput that outputs clamped positions
void window_mouse_button_input(GLFWwindow *win, int button, int action, int mods);			 //moubebutton
void window_keyboard_controls(GLFWwindow *win, int key, int scancode, int action, int mods); //keyboard
void window_size_callback(GLFWwindow *window, int width, int height);
void window_terminate();