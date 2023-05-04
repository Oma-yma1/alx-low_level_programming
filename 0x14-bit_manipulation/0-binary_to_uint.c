#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int convert = 0;
int j = 0;
if (b == NULL)
return (0);
for (; b[j] != '\0'; j++)
{
if (b[j] != '0' && b[j] != '1')
return (0);
convert = 2 * convert + (b[j] - '0');
}
return (convert);
}
