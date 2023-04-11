#include "main.h"
#include <stdlib.h>
/**
 * str_concat -  function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenation of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
int i, j, l1, l2;
l1 = l2 = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[l1] != '\0')
l1++;
while (s2[l2] != '\0')
l2++;
concat = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
if (concat == NULL)
return (NULL);
for (i = 0; i < l1; i++)
concat[i] = s1[i];
for (j = 0; j < l2; j++, i++)
concat[i] = s2[j];
concat[l1 + l2] = '\0';
return (concat);
}
