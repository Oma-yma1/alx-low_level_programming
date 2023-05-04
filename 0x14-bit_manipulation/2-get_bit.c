#include "main.h"
/**
 * get_bit - returns the value of a bit
 * @n: unsigned long int
 * @index: unsigned int
 * Return: the value of the bit at indexindex or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 63)
{
return (-1);
}
else
{
return ((n >> index) & 1);
}
}
