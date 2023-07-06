#include "hash_tables.h"
/**
 * key_index - give index
 * @key: key
 * @size: size
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int ha_val = hash_djb2(key);
unsigned long int ind = ha_val % size;
return (ind);
}
