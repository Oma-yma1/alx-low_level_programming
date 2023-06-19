#include "main.h"
/**
 * _strcpy - copy string
 * @dest: destination
 * @src: source
 * Return: the string
 */
char *_strcpy(char *dest, char *src)
{
int j = 0;
int k = 0;
while (*(src + j) != '\0')
{
j++;
}
for (; k < j; k++)
{
dest[k] = src[j];
}
dest[j] = '\0';
return (dest);
}
