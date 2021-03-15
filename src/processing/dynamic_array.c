#include <stdio.h>
#include <stdlib.h>
#include "dynamic_array.h"

void dyn_init(Dynamic_Array self, void *ptr, int sizeOfVar, int sizeOfArray, int sizeOfEndSpace)
{
	self.ptr = ptr;
	self.sizeOfVar = sizeOfVar;
	self.sizeOfArray = sizeOfArray;
	self.startSizeOfArray = sizeOfArray;
	self.sizeOfEndSpace = sizeOfEndSpace;
	self.indexOfArray = 0;
}

void dyn_realloc(Dynamic_Array *arr)
{
	if (arr->indexOfArray >= arr->sizeOfArray - arr->sizeOfEndSpace)
	{
		arr->sizeOfArray += arr->startSizeOfArray;
		arr->ptr = (void *)realloc(arr->ptr, arr->sizeOfArray);

		if (arr->ptr == NULL)
		{
			puts("Error in DYN_REALLOC");
			exit(0);
		}
	}
}
void dyn_clear(Dynamic_Array *arr)
{
	arr->sizeOfArray = arr->startSizeOfArray;
	arr->ptr = (void *)realloc(arr->ptr, arr->sizeOfArray);

	if (arr->ptr == NULL)
	{
		puts("Error in DYN_REALLOC");
		exit(0);
	}
	arr->indexOfArray = 0;
}
//void *dynamic_realloc(void *ptr, sizeOfArray, )
//void dyn_value_add(Dynamic_Array *arr, void (*addfunc)(Dynamic_Array *arr, void *value))
