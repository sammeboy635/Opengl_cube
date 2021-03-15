#include <stdio.h>
#include <stdlib.h>
#include "vert.h"
#include "../config/config.h"
#include "../util/list.h"

Vert *vert_init(int cubeSize)
{
<<<<<<< HEAD
    Vert *self = malloc(sizeof(Vert));
    self->vertices = (int *)calloc(VERT_INIT_SIZE, sizeof(int));
    //self->xyz = (int *)calloc(VERT_INIT_SIZE, sizeof(int));
    //dyn_init(self->indexs);
    self->index = 0;
    self->size = VERT_INIT_SIZE;
    self->total = 0;
    self->cc = cube_init(cubeSize);
    return self;
=======
	Vert *self = malloc(sizeof(Vert));
	self->vertices = (int *)calloc(VERT_ARRAY_VERTICES_SIZE, sizeof(int));
	//self->xyz = (int *)calloc(VERT_INIT_SIZE, sizeof(int));
	//dyn_init(self->indexs)
	self->index = 0;
	self->size = VERT_ARRAY_VERTICES_SIZE;
	self->total = 0;
	self->cc = cube_init(cubeSize);
	return self;
>>>>>>> d487245de6682188a792d6d7da08c77f7841d972
}

void vert_realloc_check(Vert *self)
{
	if (self->index >= VERT_ARRAY_VERTICES_SIZE - VERT_SIZE_CUBE)
	{
		self->size += VERT_ARRAY_VERTICES_SIZE;
		self->vertices = (int *)realloc(self->vertices, self->size * sizeof(int));
		if (self->vertices == NULL)
		{
			printf("Error in vert\n");
			exit(0);
		}
	}
}

void vert_add(Vert *self, int x, int y, int z)
{
	vert_realloc_check(self);
	self->total += 4;

	cube_set_xyz(self->cc, x, y, z);
	cube_vert_cpy(self->cc, 4, self->vertices, &self->index);
}

void vert_add_rectangle(Vert *self, int x, int y, int z, int X, int Y, int Z)
{
	vert_realloc_check(self);
	self->total += 4;
	cube_set_xyz_XYZ(self->cc, x, y, z, X, Y, Z);
	cube_vert_cpy(self->cc, 4, self->vertices, &self->index);
}

void vert_clear(Vert *self)
{
	if (self->size > VERT_ARRAY_VERTICES_SIZE)
	{
		self->vertices = (int *)realloc(self->vertices, VERT_ARRAY_VERTICES_SIZE * sizeof(int));
		self->size = VERT_ARRAY_VERTICES_SIZE;
	}
	self->total = 0;
	self->index = 0;
}

void vert_gen(Vert *self, int start, int width, int height)
{
	vert_clear(self);
	for (int x = start; x < width; x += 15)
	{
		for (int y = start; y < height; y += 15)
		{
			vert_add(self, x, y, -500);
		}
	}
}