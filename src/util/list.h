#ifndef HASHLIST_H
#define HASHLIST_H

typedef struct List
{
    struct list *next;
    void *ptr;
} List;

typedef struct t_list
{
    List *head;
    List *tail;
    int size;
} t_list;

t_list *list_init();
void list_add(t_list *tlist, void *ptr);
void list_remove(t_list *tlist, int index);

#endif