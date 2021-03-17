#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
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
	scr->verts = (int *)malloc(sizeof(int) * ((SCREEN_ARRAY_WIDTH * SCREEN_ARRAY_HEIGHT) * 12));
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

void screen_procces_array_down()
{
	for (int x = 0; x < SCREEN_ARRAY_WIDTH; x++)
	{
		for (int y = 1; y < SCREEN_ARRAY_HEIGHT; y++)
		{
			if (scr->screen[x][y] != -1)
			{
				if (scr->screen[x][y - 1] == -1) //check underneath the block
				{
					scr->screen[x][y - 1] = scr->screen[x][y];
					cube_set_xyz(scr->cc, x * CUBE_SIZE, (y - 1) * CUBE_SIZE, ZZ);
					cube_vert_cpy(scr->cc, 4, scr->verts, &scr->screen[x][y]);
					scr->screen[x][y] = -1;
				}
				else if (x == 0) //check if it is the left border
				{
					if (scr->screen[x + 1][y - 1] == -1)
					{
						scr->screen[x + 1][y - 1] = scr->screen[x][y];
						cube_set_xyz(scr->cc, (x + 1) * CUBE_SIZE, (y - 1) * CUBE_SIZE, ZZ);
						cube_vert_cpy(scr->cc, 4, scr->verts, &scr->screen[x][y]);
						scr->screen[x][y] = -1;
					}
				}
				else if (x == SCREEN_ARRAY_WIDTH - 1) //check if it is the right border
				{
					if (scr->screen[x - 1][y - 1] == -1)
					{
						scr->screen[x - 1][y - 1] = scr->screen[x][y];
						cube_set_xyz(scr->cc, (x - 1) * CUBE_SIZE, (y - 1) * CUBE_SIZE, ZZ);
						cube_vert_cpy(scr->cc, 4, scr->verts, &scr->screen[x][y]);
						scr->screen[x][y] = -1;
					}
				}
				else // not left or right border everything else
				{
					if (scr->screen[x - 1][y - 1] == -1)
					{
						scr->screen[x - 1][y - 1] = scr->screen[x][y];
						cube_set_xyz(scr->cc, (x - 1) * CUBE_SIZE, (y - 1) * CUBE_SIZE, ZZ);
						cube_vert_cpy(scr->cc, 4, scr->verts, &scr->screen[x][y]);
						scr->screen[x][y] = -1;
					}
					else if (scr->screen[x + 1][y - 1] == -1)
					{
						scr->screen[x + 1][y - 1] = scr->screen[x][y];
						cube_set_xyz(scr->cc, (x + 1) * CUBE_SIZE, (y - 1) * CUBE_SIZE, ZZ);
						cube_vert_cpy(scr->cc, 4, scr->verts, &scr->screen[x][y]);
						scr->screen[x][y] = -1;
					}
				}
			}
		}
	}
}

void screen_procces_array_up()
{
	for (int x = 0; x < SCREEN_ARRAY_WIDTH; x++)
	{
		for (int y = SCREEN_ARRAY_HEIGHT - 2; y >= 0; y--)
		{
			if (scr->screen[x][y] != -1)
			{
				if (scr->screen[x][y + 1] == -1) //check above the block
				{
					scr->screen[x][y + 1] = scr->screen[x][y];
					cube_set_xyz(scr->cc, x * CUBE_SIZE, (y + 1) * CUBE_SIZE, ZZ);
					cube_vert_cpy(scr->cc, 4, scr->verts, &scr->screen[x][y]);
					scr->screen[x][y] = -1;
				}
				else if (x == 0) //check if it is the left border
				{
					if (scr->screen[x + 1][y + 1] == -1)
					{
						scr->screen[x + 1][y + 1] = scr->screen[x][y];
						cube_set_xyz(scr->cc, (x + 1) * CUBE_SIZE, (y + 1) * CUBE_SIZE, ZZ);
						cube_vert_cpy(scr->cc, 4, scr->verts, &scr->screen[x][y]);
						scr->screen[x][y] = -1;
					}
				}
				else if (x == SCREEN_ARRAY_WIDTH - 1) //check if it is the right border
				{
					if (scr->screen[x - 1][y + 1] == -1)
					{
						scr->screen[x - 1][y + 1] = scr->screen[x][y];
						cube_set_xyz(scr->cc, (x - 1) * CUBE_SIZE, (y + 1) * CUBE_SIZE, ZZ);
						cube_vert_cpy(scr->cc, 4, scr->verts, &scr->screen[x][y]);
						scr->screen[x][y] = -1;
					}
				}
				else // not left or right border everything else
				{
					if (scr->screen[x - 1][y + 1] == -1)
					{
						scr->screen[x - 1][y + 1] = scr->screen[x][y];
						cube_set_xyz(scr->cc, (x - 1) * CUBE_SIZE, (y + 1) * CUBE_SIZE, ZZ);
						cube_vert_cpy(scr->cc, 4, scr->verts, &scr->screen[x][y]);
						scr->screen[x][y] = -1;
					}
					else if (scr->screen[x + 1][y + 1] == -1)
					{
						scr->screen[x + 1][y + 1] = scr->screen[x][y];
						cube_set_xyz(scr->cc, (x + 1) * CUBE_SIZE, (y + 1) * CUBE_SIZE, ZZ);
						cube_vert_cpy(scr->cc, 4, scr->verts, &scr->screen[x][y]);
						scr->screen[x][y] = -1;
					}
				}
			}
		}
	}
}

void screen_process_list()
{
	List *current = scr->proccessQue->head;
	if (current == NULL)
		return;

	List *last = NULL;

	while (current != NULL)
	{
		if (screen_process(current->ptr) == 0)
		{
			if (scr->proccessQue->tail == current & scr->proccessQue->head == current)
			{
				scr->proccessQue->tail = NULL;
				scr->proccessQue->head = NULL;
				free(current->ptr);
				free(current);
				return;
			}
			else if (scr->proccessQue->tail == current)
			{
				scr->proccessQue->tail = last;
				free(current->ptr);
				free(current);
				return;
			}
			else if (scr->proccessQue->head == current)
			{
				scr->proccessQue->head = current->next;
				last = current;
				current = current->next;
				free(last->ptr);
				free(last);
			}
		}
		last = current;
		current = current->next;
	}
}
int screen_process(void *ptr)
{
	if (ptr == NULL)
		return;
	Pixel *pix = (Pixel *)ptr;

	if (pix->y < 1)
		return FALSE;

	if (pix->y > SCREEN_HEIGHT | pix->x > SCREEN_WIDTH) //debugging
	{
		puts("error");
		return;
	}
	int xx = pix->x / CUBE_SIZE;
	int yy = pix->y / CUBE_SIZE;

	int index = scr->screen[xx][yy - 1];

	if (index != -1)
		return FALSE;

	index = scr->screen[xx][yy];
	scr->screen[xx][yy] = -1;
	scr->screen[xx][yy - 1] = index;
	pix->y -= CUBE_SIZE;

	cube_set_xyz(scr->cc, pix->x, pix->y, ZZ);
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
	if (self == NULL | x > SCREEN_WIDTH | y > SCREEN_HEIGHT) // debugging
		perror("pix_init");

	self->x = x;
	self->y = y;
	return self;
}
