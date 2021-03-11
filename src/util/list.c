#include <stdlib.h>
#include <stdio.h>
#include "list.h"

Tlist *list_init()
{
	Tlist *self = (Tlist *)malloc(sizeof(Tlist));
	self->head = NULL;
	self->tail = NULL;
	return self;
}
void list_add(Tlist *list, void *ptr)
{
	List *current = (List *)malloc(sizeof(List));
	current->ptr = ptr;
	current->next = NULL;

	if (list->head == NULL)
	{
		list->head = current;
		list->tail = current;
		return;
	}

	list->tail->next = current;
	list->tail = current;
}
void list_dequeue(Tlist *list, void *mptr, void (*deque)(void *mptr, void *ptr))
{
	if (list->tail == NULL)
		return;

	deque(mptr, list->tail->ptr);
	free(list->tail->ptr);
	free(list->tail);
}
void list_traverse(Tlist *list, void *mptr, void (*trav)(void *mptr, void *ptr))
{
	if (list->head != NULL)
		return;

	List *current = list->head;
	while (current != NULL)
	{
		trav(mptr, current->ptr);
		current = current->next;
	}
}
