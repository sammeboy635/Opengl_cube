#pragma once
#include "vert.h"

typedef struct Process
{
    int *indexs;
    int index;
    int size;
    Vert *vert;
} Process;

typedef struct float_dylan
{
    float num;
} Float_Dylan;