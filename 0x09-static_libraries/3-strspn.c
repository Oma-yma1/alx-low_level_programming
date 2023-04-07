#include "main.h"
/**
 * _strspn - the lenght of the initial substring of the string pointed t by s
 * @s: string
 * @accept: accept
 * Return: 0 success
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
int j;
while (*s)
{
for (j = 0; accept[j]; j++)
{
if (*s == accept[j])
{
i++;
break;
}
else if (accept[j + 1] == '\0')
return (i);
}
s++;
}
return (i);
}
