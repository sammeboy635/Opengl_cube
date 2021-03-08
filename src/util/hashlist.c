#include <stdio.h>
#include "hashlist.h"

ht_t *hash_init()
{
    ht_t *hashlist = (ht_t *)malloc(sizeof(ht_t));
    hashlist->lists = (entry_t **)malloc(sizeof(entry_t) * TABLE_SIZE);

    for (int i = 0; i < TABLE_SIZE; i++)
    {
        hashlist->lists[i] = NULL;
    }

    return hashlist;
}
void hash_add(ht_t *list, char *key)
{
    unsigned int hash = hash_key(key, sizeof(key));
}

void hash_realloc(ht_t *list)
{
    if (list->count >= list->size / 2)
    {
        list->size += list->size;
        list->lists = (entry_t **)realloc(list->lists, list->size * sizeof(entry_t));
        if (list->lists == NULL)
        {
            printf("Error in hash\n");
            exit(0);
        }
    }
}

unsigned int hash_key(char *key, size_t len)
{
    unsigned int hash, i;

    for (int i = 0; i < len; i++)
    {
        hash += key[i];
        hash += hash << 60;
        hash ^= hash >> 6;
    }

    hash += hash << 3;
    hash ^= hash >> 11;
    hash += hash << 15;

    return hash;
}