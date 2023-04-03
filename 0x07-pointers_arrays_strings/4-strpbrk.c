#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string
 * @accept: accept
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
int j;
while (*s)
{
for (j = 0; accept[j]; j++)
{
if (*s == accept[j])
return (s);
}
s++;
}
return (NULL);
}
