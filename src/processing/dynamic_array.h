#pragma once
#include <stdlib.h>

typedef struct Dynamic_Array
{
    void *ptr;
    int indexOfArray;
    int sizeOfVar;
    int sizeOfArray;
    int startSizeOfArray;
    int sizeOfEndSpace;

} Dynamic_Array;

Dynamic_Array *dyn_init(int sizeOfVar, int sizeOfArray, int sizeOfEndSpace);
void dyn_realloc(Dynamic_Array *arr);
void dyn_clear(Dynamic_Array *arr);