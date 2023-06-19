#include "main.h"
/**
 * _strncat - concatenation of string
 * @dest: destination
 * @src: source
 * @n: bute
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j;
while (dest[i] != '\0')
{
i++;
}
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
