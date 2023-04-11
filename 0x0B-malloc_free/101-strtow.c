#include "main.h"
#include <stdlib.h>
int count(char *s);
/**
 * strtow - function that splits a string into words
 * @str: string
 * Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
char **m, *t;
int i, j = 0, l = 0, w, c = 0, st, e;
while (*(str + l))
l++;
w = count(str);
if (w == 0)
return (NULL);
m = (char **)malloc(sizeof(char *) * (w + 1));
if (m == NULL)
return (NULL);
for (i = 0; i <= l; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
e = i;
t = (char *)malloc(sizeof(char) * (c + 1));
if (t == NULL)
return (NULL);
while (st < e)
*t++ = str[st++];
*t = '\0';
m[j] = t - c;
j++;
c = 0;
}
}
else if (c++ == 0)
st = i;
}
m[j] = NULL;
return (m);
}
/**
 * count - count number of words
 * @s: string
 * Return: number of word
 */
int count(char *s)
{
int f, c, w;
f = 0;
w = 0;
for (c = 0; s[c] != '\0'; c++)
{
if (s[c] == ' ')
f = 0;
else if (f == 0)
{
f = 1;
w++;
}
}
return (w);
}
