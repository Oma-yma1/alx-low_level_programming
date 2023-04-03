#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character
 * Return: character c in the string s or 0 if c is not found
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; i >= '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
return (NULL);
}
