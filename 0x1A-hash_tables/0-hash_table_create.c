#include "hash_tables.h"
/**
 * hash_table_create - creat a hash table
 * @size: size
 * Return: new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *has_tab = NULL;
unsigned int j;
if (size == 0)
return (NULL);
has_tab = malloc(sizeof(hash_table_t));
if (has_tab == NULL)
return (NULL);
has_tab->array = malloc(sizeof(hash_node_t *) * size);
if (has_tab->array == NULL)
{
free(has_tab);
return (NULL);
}
for (j = 0; j < size; j++)
has_tab->array[j] = NULL;
has_tab->size = size;
return (has_tab);
}
