#include "main.h"
/**
 * _memset - fill memory with value
 *  @s: starting adress
 *  @b: value
 *  @n: number of bytes
 *  Return: changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
int j = 0;
for (; n > 0; j++)
{
s[j] = b;
n--;
}
return (s);
}
