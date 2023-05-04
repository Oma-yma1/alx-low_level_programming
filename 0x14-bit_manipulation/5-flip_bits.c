#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: insigned long int
 * @m: unsignedd lont int
 * Return: numberof bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int j;
unsigned int num = 0;
unsigned long int nm = n ^ m;
for (j = 63; j >= 0; j--)
{
num += (nm >> j) & 1;
}
return (num);
}
