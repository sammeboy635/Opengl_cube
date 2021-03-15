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

extern Screen *scr;

Screen *screen_init();
void screen_add_sqaure(int x, int y);
void screen_process_list();
int screen_process(void *ptr);
void screen_clear();
void screen_free();
Pixel *pix_init(int x, int y);