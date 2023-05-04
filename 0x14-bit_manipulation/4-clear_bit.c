#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer
 * @index: index
 * Return: 1 if i worked or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
{
return (-1);
}
*n &= ~(1 << index);
return (1);
}
