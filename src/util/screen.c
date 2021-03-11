#include <stdio.h>
#include <stdlib.h>
#include "screen.h"
#include "list.h"

Screen *screen_init()
{
	Screen *scr = (Screen *)malloc(sizeof(Screen));
	scr->cc = cube_init(CUBE_SIZE);

	for (int x = 0; x < SCREEN_ARRAY_WIDTH; x++)
		for (int y = 0; y < SCREEN_ARRAY_HEIGHT; y++)
			scr->screen[x][y] = -1;

	scr->totalQuads = 0;
	scr->vertIndex = 0;
	scr->proccessQue = list_init();
	scr->verts = (int *)malloc(sizeof(int) * SCREEN_ARRAY_WIDTH * SCREEN_ARRAY_HEIGHT);
	return scr;
}

void screen_add_sqaure(Screen *scr, int x, int y)
{
	int xx = x / CUBE_SIZE;
	int yy = y / CUBE_SIZE;
	if (scr->screen[xx][yy] == -1)
	{
		scr->screen[xx][yy] = scr->vertIndex;
		list_add(scr->proccessQue, (void *)pixel_init(x, y));
		cube_set_xyz(scr->cc, x, y, ZZ);
		cube_vert_cpy(scr->cc, 4, scr->verts, &scr->vertIndex);
		scr->totalQuads += 4;
	}
}

void screen_process(Screen *scr)
{
	if (scr->proccessQue->head == NULL)
	{
		return;
	}
	int index;
	Pixel *pixel;
	List *current = scr->proccessQue->head;
	List *next = current->next;
	while (current != NULL)
	{
		pixel = (Pixel *)current->ptr;
		index = scr->screen[pixel->x][pixel->y];

		if (scr->screen[pixel->x][pixel->y - 1] != -1)
		{
			scr->screen[pixel->x][pixel->y] = -1;
			pixel->y -= 1;
			cube_set_xyz(scr->cc, pixel->x, pixel->y, ZZ);
			cube_vert_cpy(scr->cc, 4, scr->verts, &index);
		}
	}
}
void screen_clear(Screen *scr)
{
	for (int x = 0; x < SCREEN_ARRAY_WIDTH; x++)
		for (int y = 0; y < SCREEN_ARRAY_HEIGHT; y++)
			scr->screen[x][y] = -1;
	scr->vertIndex = 0;
	scr->totalQuads = 0;
	//list_free_all(scr->proccessQue);
}
void screen_free(Screen *scr)
{
	free(scr->verts);
	free(scr);
}
void screen_process_list(void *mptr, void *ptr)
{
}
Pixel *pixel_init(int x, int y)
{
	Pixel *self = (Pixel *)malloc(sizeof(Pixel));
	self->x = x;
	self->y = y;
	return self;
}
