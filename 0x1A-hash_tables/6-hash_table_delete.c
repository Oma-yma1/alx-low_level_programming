#include "hash_tables.h"
/**
 * hash_table_delete - delet hash table
 * @ht: hach table
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *nod;
unsigned long int j;
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
