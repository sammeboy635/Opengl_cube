#include <stdio.h>
#include <stdlib.h>
#include "screen.h"
#include "list.h"
//#include "../main.h"
Screen *scr;
Screen *screen_init()
{
	//Screen *scr = (Screen *)malloc(sizeof(Screen));
	scr = (Screen *)malloc(sizeof(Screen));
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

void screen_add_sqaure(int x, int y)
{
	int xx = x / CUBE_SIZE;
	int yy = y / CUBE_SIZE;
	if (scr->screen[xx][yy] == -1)
	{
		scr->screen[xx][yy] = scr->vertIndex;
		//list_add(scr->proccessQue, pix_init(x, y));

		cube_set_xyz(scr->cc, x, y, ZZ);
		cube_vert_cpy(scr->cc, 4, scr->verts, &scr->vertIndex);
		scr->totalQuads += 4;
	}
}

void screen_process_list()
{
	List *current = scr->proccessQue->head;
	if (current == NULL)
		return;

	List *last = current;

	while (current != NULL)
	{
		if (screen_process(current->ptr) == 0)
		{
			if (scr->proccessQue->head == current)
			{
				scr->proccessQue->head = current->next;
				last = current;
				current = current->next;
				free(last->ptr);
				free(last);
			}
			else if (scr->proccessQue->head == current)
			{
				scr->proccessQue->tail = last;
				free(current->ptr);
				free(current);
				current = NULL;
			}
		}
		else
		{
			last = current;
			current = current->next;
		}
	}
}
int screen_process(void *ptr)
{

	Pixel *pix = (Pixel *)ptr;

	if (pix->y < 1)
		return FALSE;

	int index = scr->screen[pix->x][pix->y - 1];

	if (index != -1)
		return FALSE;

	index = scr->screen[pix->x][pix->y];
	scr->screen[pix->x][pix->y] = -1;
	scr->screen[pix->x][pix->y] = index;

	cube_set_xyz(scr->cc, pix->x, pix->y - 1, ZZ);
	cube_vert_cpy(scr->cc, 4, scr->verts, &index);
	return TRUE;
}
void screen_clear()
{
	for (int x = 0; x < SCREEN_ARRAY_WIDTH; x++)
		for (int y = 0; y < SCREEN_ARRAY_HEIGHT; y++)
			scr->screen[x][y] = -1;
	scr->vertIndex = 0;
	scr->totalQuads = 0;
	//list_free_all(scr->proccessQue);
}
void screen_free()
{
	free(scr->verts);
	free(scr);
}

Pixel *pix_init(int x, int y)
{
	Pixel *self = (Pixel *)malloc(sizeof(Pixel));
	self->x = x;
	self->y = y;
	return self;
}
