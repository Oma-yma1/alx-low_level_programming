#include "main.h"
/**
 * _puts - writes a string t stdout up to but not including the null character
 * @s: string
 * Return: 0 success
 */
void _puts(char *s)
{
int j = 0;
while (s[j])
{
_putchar(s[j]);
j++;
}
_putchar('\n');
}
