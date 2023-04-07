#include "main.h"
/**
 * _strncat - concatenation of 2 strings
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int j;
int k;
j = 0;
while (dest[j] != '\0')
{
j++;
}
while (k < n && src[k] != '\0')
{
dest[j] = src[k];
j++;
k++;
}
dest[j] = '\0';
return (dest);
}

