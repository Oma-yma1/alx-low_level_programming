#include "main.h"
/**
 * _memcpy - copy memory
 * @dest: destination
 * @src: source
 * @n: number bytes
 * Return: new memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int c = 0;
int i = n;
for (; c < i; c++)
{
dest[c] = src[c];
n--;
}
return (dest);
}
