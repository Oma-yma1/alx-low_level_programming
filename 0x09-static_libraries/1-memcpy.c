#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int a = 0;
int j = n;
for (; a < j; a++)
{
dest[a] = src[a];
n--;
}
return (dest);
}
