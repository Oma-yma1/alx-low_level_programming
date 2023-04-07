#include "main.h"
/**
 * _strchr - searvh for the first occurence of the character c
 * @s: string
 * @c: character
 * Return: 0 success
 */
char *_strchr(char *s, char c)
{
int j = 0;
for (; s[j] >= '\0'; j++)
{
if (s[j] == c)
return (&s[j]);
}
return (0);
}
