#include "vert.h"
#define INIT_SIZE 1024
#define SIZE_CUBE 32

Vert *vert_init(int cubeSize)
{
    Vert *self = malloc(sizeof(Vert));
    self->vertices = (int *)calloc(INIT_SIZE, sizeof(int));
    self->index = 0;
    self->size = INIT_SIZE;
    self->total = 0;
    self->cc = cube_init(cubeSize);
    return self;
}

void vert_realloc_check(Vert *self)
{
    if (self->index >= INIT_SIZE - SIZE_CUBE)
    {
        self->size += INIT_SIZE;
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
    self->cc->cube_set_xyz(self->cc, x, y, z);
    self->cc->cube_vert_cpy(self->cc, 4, self->vertices, &self->index);
}
void vert_add_rectangle(Vert *self, int x, int y, int z, int X, int Y, int Z)
{
    vert_realloc_check(self);
    self->total += 4;
    self->cc->cube_set_xyz_XYZ(self->cc, x, y, z, X, Y, Z);
    self->cc->cube_vert_cpy(self->cc, 4, self->vertices, &self->index);
}
void vert_clear(Vert *self)
{
    if (self->size > INIT_SIZE)
    {
        self->vertices = (int *)realloc(self->vertices, INIT_SIZE * sizeof(int));
        self->size = INIT_SIZE;
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