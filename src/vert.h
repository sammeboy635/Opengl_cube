#ifndef VERT_H
#define VERT_H
#include <stdio.h>
#include "cube.h"
typedef struct Vert
{
    int *vertices;
    int index;
    int size;
    int total;
    cubeCalc *cc;
} Vert;

Vert *vert_init();
void vert_realloc_check(Vert *self);
void vert_add(Vert *self, int x, int y, int z);
void vert_add_rectangle(Vert *self, int x, int y, int z, int X, int Y, int Z);
void vert_clear(Vert *self);
void vert_gen(Vert *self, int start, int width, int height);
#endif
