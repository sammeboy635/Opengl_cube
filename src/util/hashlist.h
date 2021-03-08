#ifndef HASHLIST_H
#define HASHLIST_H
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hashlist.h"

#define TABLE_SIZE 3

typedef struct entry_t
{
    char *key;
    char *value;
    struct entry_t *next;
} entry_t;

typedef struct
{
    entry_t **lists;
    int count;
    int size;
} ht_t;

ht_t *hash_init();
void hash_add(ht_t *list, char *key);
void hash_realloc(ht_t *list);
unsigned int hash_key(char *key, size_t len);

#endif