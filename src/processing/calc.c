#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
#include "../util/list.h"
#include "vert.h"
#include "../config/config.h"

Process *calc_init()
{
    Process *plist = (Process *)malloc(sizeof(Process));
    return plist;
}

void calc_process(Process *plist)
{
}

void calc_realloc_check(Process *plist)
{
    if (plist->index >= CALC_INIT_SIZE - CALC_REALLOC_SIZE)
    {
        plist->size += CALC_INIT_SIZE;
        plist->indexs = (int *)realloc(plist->indexs, plist->size * sizeof(int));
        if (plist->indexs == NULL)
        {
            printf("Error in vert\n");
            exit(0);
        }
    }
}
void calc_clear(Process *plist)
{
    if (plist->size > CALC_INIT_SIZE)
    {
        plist->indexs = (int *)realloc(plist->indexs, CALC_INIT_SIZE * sizeof(int));
        plist->size = CALC_INIT_SIZE;
    }
    plist->index = 0;
}

void calc_remove(Process *plist)
{
}