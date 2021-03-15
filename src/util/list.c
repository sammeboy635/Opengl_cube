#include <stdlib.h>
#include <stdio.h>
#include "list.h"
#include "../config/config.h"
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
void list_remove(Tlist *list)
{
	if (list->head == NULL)
		return;

	List *oldHead = list->head;
	list->head = oldHead->next;

	free(list->head->ptr);
	free(oldHead);
}
void list_dequeue(Tlist *list, int (*deque)(void *ptr))
{
	if (list->head == NULL)
		return;
	if (deque(list->head) == TRUE)
		list_remove(list);
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
