#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to the beginning of needle,or NULL if needle is not found
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *s = haystack;
char *f = needle;
while (*s == *f && *f != '\0')
{
s++;
f++;
}
if (*f == '\0')
return (haystack);
}
return (NULL);
}
