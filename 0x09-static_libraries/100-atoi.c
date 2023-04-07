#include "main.h"
/**
 * _atoi - convert the string to integer
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
int si = 1, j = 0;
unsigned int r = 0;
while (!(s[j] <= '9' && s[j] >= '0') && s[j] != '\0')
{
if (s[j] == '-')
si *= -1;
j++;
}
while (s[j] <= '9' && (s[j] >= '0' && s[j] != '\0'))
{
r = (r * 10) + (s[j] - '0');
j++;
}
r *= si;
return (r);
}
