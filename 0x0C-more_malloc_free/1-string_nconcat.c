#include "main.h"
/**
 * string_nconcat -  function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: unsigned int
 * Return: pointer shall point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i = 0, j = 0, k = 0;
while (s1 && s1[i])
i++;
while (s2 && s2[j])
j++;
if (j > n)
j = n;
s = malloc(sizeof(char) * (i + j + 1));
if (s == NULL)
return (NULL);
for (k = 0; k < i; k++)
s[k] = s1[k];
for (k = 0; k < j; k++)
s[k + i] = s2[k];
s[i + j] = '\0';
return (s);
}
