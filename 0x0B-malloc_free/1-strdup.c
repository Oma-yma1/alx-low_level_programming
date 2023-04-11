#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
char *c;
int j, l = 0;
if (str == NULL)
return (NULL);
while (str[l] != '\0')
l++;
c = (char *)malloc(sizeof(char) * (l+1));
if (c == NULL)
return (NULL);
for (j = 0; j < l; j++)
c[j] = str[j];
return (c);
}
