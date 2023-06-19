#include "main.h"
/**
 * _strcat - concatenation of string
 * @dest: destination
 * @src: source
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
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
/**
 * _strncpy - copy string
 * @dest: destination
 * @src: source
 * @n: number of string
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
int j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
/**
 * _strcmp - compare of two string
 * @s1: first string
 * @s2: second string
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}
/**
 * _memset - fill memory
 * @s: start
 * @b: value
 * @n: number bytes
 * Return: array
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
