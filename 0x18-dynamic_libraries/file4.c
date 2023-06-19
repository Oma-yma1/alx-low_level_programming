#include "main.h"
/**
 * _memcpy - copy memory
 * @dest: destination
 * @src: source
 * @n: number bytes
 * Return: new memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int c = 0;
int i = n;
for (; c < i; c++)
{
dest[c] = src[c];
n--;
}
return (dest);
}
/**
 * _strchr - search for the first occurence
 * @s: string
 * @c: character
 * Return: 0 if success
 */
char *_strchr(char *s, char c)
{
int i = 0;
for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
/**
 * _strspn - lenght of substring
 * @s: string
 * @accept: accept
 * Return: 0 success
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int j = 0;
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
j++;
break;
}
else if (accept[i + 1] == '\0')
return (j);
}
s++;
}
return (j);
}
/**
 * _strpbrk - find first character
 * @s: string
 * @accept: accept
 * Return: 0success
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
return ('\0');
}
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
