#pragma once
typedef struct List
{
	void *ptr;
	struct List *next;
} List;
typedef struct Tlist
{
	List *head;
	List *tail;
} Tlist;

Tlist *list_init();
void list_add(Tlist *list, void *ptr);
void list_dequeue(Tlist *list, int (*deque)(void *ptr));
void list_traverse(Tlist *list, void *mptr, void (*trav)(void *mptr, void *ptr));