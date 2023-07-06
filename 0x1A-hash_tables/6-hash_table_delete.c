#include "hash_tables.h"
/**
 * hash_table_delete - delet hash table
 * @ht: hach table
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node;
unsigned long int j;
if (ht == NULL)
return;
while (j < ht->size)
{
while (ht->array[j] != NULL)
{
node = ht->array[j]->next;
free(ht->array[j]->key);
free(ht->array[j]->value);
free(ht->array[j]);
ht->array[j] = node;
}
j++;
}
free(ht->array);
free(ht);
}
