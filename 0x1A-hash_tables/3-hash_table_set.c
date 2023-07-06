#include "hash_tables.h"
/**
 * hash_table_set - add an element to the hash table
 * @key: key
 * @value: value
 * @ht: hash table
 * Return: 1 or 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *nw_nd, *tmp;
unsigned long int ind;
if (ht == NULL || key == NULL || *key == '\0')
return (0);
ind = key_index((unsigned char *)key, ht->size);
tmp = ht->array[ind];
while (tmp != NULL)
{
if (strcmp(tmp->key, key) == 0)
{
free(tmp->value);
tmp->value = strdup(value);
return (1);
}
tmp = tmp->next;
}
nw_nd = malloc(sizeof(hash_node_t));
if (nw_nd == NULL)
return (0);
nw_nd->key = strdup(key);
nw_nd->value = strdup(value);
if (nw_nd->key == NULL || nw_nd->value == NULL)
{
free(nw_nd->key);
free(nw_nd->value);
free(nw_nd);
return (0);
}
nw_nd->next = ht->array[ind];
ht->array[ind] = nw_nd;
return (1);
}
