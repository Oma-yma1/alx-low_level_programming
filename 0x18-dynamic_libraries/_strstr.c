#include "main.h"
/**
 * _strstr - find the first occurence
 * @haystack: haystack
 * @needle: needle
 * Return: 0 if success
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *h = haystack;
char *n = needle;
while (*h == *n && *n != '\0')
{
h++;
n++;
}
if (*n == '\0')
return (haystack);
}
return (0);
}
