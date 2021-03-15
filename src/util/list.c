#include <stdio.h>
#include <stdlib.h>
#include "list.h"

t_list *list_init()
{
	t_list *list = (t_list *)malloc(sizeof(t_list));
	list->head = NULL;
	list->tail = NULL;

	return list;
}

void list_add(t_list *tlist, void *ptr)
{
	List *current = (List *)malloc(sizeof(List));
	current->ptr = ptr;
	current->next = NULL;
	tlist->size++;

	if (tlist->tail == NULL)
	{
		tlist->head = current;
		tlist->tail = current;
		return;
	}

	tlist->tail->next = current;
	tlist->tail = current;
}

void list_remove(t_list *tlist, int index)
{
	List *current = tlist->head;

	for (int i = 1; i < index; i++)
	{
		current = current->next;
	}

	if (tlist->head == current)
	{
		tlist->head = tlist->head->next;
	}

	free(current);
}
