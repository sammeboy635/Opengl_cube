#pragma once
//#ifndef VERT_H
//#define VERT_H

#include "cube.h"
#include "dynamic_array.h"
#include <stdio.h>

typedef struct Vert
{

    int *vertices; // 12 verts per quad

    int index; //index of where the verts are in vertices array
    int size;  // size of vertices array
    int total; // total quads
    Dynamic_Array indexs;
    cubeCalc *cc; //cube vert calator
} Vert;

typedef struct Node
{
    int index;
} Node;

Vert *vert_init();
void vert_realloc_check(Vert *self);
void vert_add(Vert *self, int x, int y, int z);
void vert_add_rectangle(Vert *self, int x, int y, int z, int X, int Y, int Z);
void vert_clear(Vert *self);
void vert_gen(Vert *self, int start, int width, int height);
//#endif
