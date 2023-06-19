#include "main.h"
/**
 * _puts - string to stdout up
 * @s: string
 * Return: 0 if sucess
 */
void _puts(char *s)
{
int i = 0;
while (s[i])
{
_putchar(s[i]);
i++;
}
_putchar('\n');
}
