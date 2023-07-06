#include "hash_tables.h"
/**
* shash_table_create - create shash table
* @size: size
* Return: hash table
*/
shash_table_t *shash_table_create(unsigned long int size)
{
unsigned long int j;
shash_table_t *ht;
ht = malloc(sizeof(shash_table_t));
if (ht == NULL)
return (NULL);
ht->size = size;
ht->array = malloc(sizeof(shash_node_t *) * size);
if (ht->array == NULL)
return (NULL);
for (j = 0; j < size; j++)
ht->array[j] = NULL;
ht->shead = NULL;
ht->stail = NULL;
return (ht);
}
/**
* shash_table_set - add element to table
* @ht: hash table
* @key: key
* @value: value
* Return: 0 or 1 if success
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
unsigned long int ind = key_index((unsigned char *)key, ht->size);
shash_node_t *nd = ht->array[ind];
shash_node_t *nw = NULL;
if (ht == NULL || key == NULL || value == NULL)
return (0);
while (nd != NULL)
{
if (strcmp(nd->key, key) == 0)
{
free(nd->value);
nd->value = strdup(value);
return (1);
}
nd = nd->next;
}
nw = malloc(sizeof(shash_node_t));
if (nw == NULL)
return (0);
nw->key = strdup(key);
nw->value = strdup(value);
nw->next = ht->array[ind];
ht->array[ind] = nw;
if (ht->shead == NULL || strcmp(nw->key, ht->shead->key) < 0)
{
nw->sprev = NULL;
nw->snext = ht->shead;
if (ht->shead != NULL)
ht->shead->sprev = nw;
else
ht->stail = nw;
ht->shead = nw;
}
else
{
nd = ht->shead;
while (nd->next != NULL && strcmp(nw->key, nd->snext->key) > 0)
nd = nd->snext;
nw->sprev = nd;
nw->snext = nd->snext;
if (nd->snext != NULL)
nd->snext->sprev = nw;
else
ht->stail = nw;
nd->snext = nw;
}
return (1);
}
/**
* shash_table_get - table get
* @ht: hash table
* @key: key
* Return: key ht
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
unsigned long int ind = key_index((unsigned char *)key, ht->size);
shash_node_t *nd = ht->array[ind];
if (ht == NULL || key == NULL)
return (NULL);
while (nd != NULL)
{
if (strcmp(nd->key, key) == 0)
return (nd->value);
nd = nd->next;
}
return (NULL);
}
/**
* shash_table_print - print table
* @ht: hash table
*/
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *nd = ht->shead;
if (ht == NULL)
return;
printf("{");
while (nd != NULL)
{
printf("'%s': '%s'", nd->key, nd->value);
if (nd->snext != NULL)
printf(", ");
nd = nd->snext;
}
printf("}\n");
}
/**
* shash_table_print_rev - print rev table
* @ht: hash table
*/
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *nd = ht->stail;
if (ht == NULL)
return;
printf("{");
while (nd != NULL)
{
printf("'%s': '%s'", nd->key, nd->value);
if (nd->sprev != NULL)
printf(", ");
nd = nd->sprev;
}
printf("}\n");
}
/**
* shash_table_delete - delete hash table
* @ht: hash table
*/
void shash_table_delete(shash_table_t *ht)
{
shash_node_t *nod;
unsigned long int j = 0;
if (ht == NULL)
return;
while (j < ht->size)
{
while (ht->array[j] != NULL)
{
nod = ht->array[j]->next;
free(ht->array[j]->key);
free(ht->array[j]->value);
free(ht->array[j]);
ht->array[j] = nod;
}
j++;
}
free(ht->array);
free(ht);
}
