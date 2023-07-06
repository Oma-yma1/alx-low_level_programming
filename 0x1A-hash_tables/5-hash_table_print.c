#include "hash_tables.h"
/**
 * hash_table_print - print hash table
 * @ht: hasch table
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *nd;
unsigned long int j;
int fl = 0;
if (ht == NULL)
return;
printf("{");
for (j = 0; j < ht->size; j++)
{
nd = ht->array[j];
while (nd != NULL)
{
if (fl)
printf(", ");
printf("'%s': '%s'", nd->key, nd->value);
fl = 1;
nd = nd->next;
}
}
printf("}\n");
}
