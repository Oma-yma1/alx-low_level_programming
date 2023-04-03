#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: accept
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int i, j;
for (j = 0; s[j] >= '\0'; j++)
{
for (i = 0; accept[i] >= '\0'; i++)
{
if (s[j] == accept[i])
{
n++;
break;
}
else if (accept[i + 1] == '\0')
return (n);
}
}
return (n);
}
