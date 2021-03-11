#pragma once
#include "../config/config.h"
#include "../processing/cube.h"
#include "list.h"

typedef struct Pixel
{
	int x;
	int y;
} Pixel;
typedef struct Screen
{
	int vertIndex;
	int totalQuads;
	int *verts;
	Tlist *proccessQue;
	int screen[SCREEN_ARRAY_WIDTH][SCREEN_ARRAY_HEIGHT]; //Takes the index of where the vertices is
	cubeCalc *cc;
} Screen;

Screen *screen_init();
void screen_add_sqaure(Screen *scr, int x, int y);
void screen_clear(Screen *scr);
void screen_free(Screen *scr);
Pixel *pixel_init(int x, int y);