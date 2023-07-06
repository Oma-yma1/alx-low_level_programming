#include "hash_tables.h"
/**
 * hash_table_get - retrieves value associated with a key
 * @ht: hach table
 * @key: key
 * Return: value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *nd;
unsigned long int ind;
if (ht == NULL || key == NULL)
	return (NULL);
ind = key_index((const unsigned char *)key, ht->size);
nd = ht->array[ind];
while (nd != NULL)
{
if (strcmp(nd->key, key) == 0)
return (nd->value);
nd = nd->next;
}
return (NULL);
}
