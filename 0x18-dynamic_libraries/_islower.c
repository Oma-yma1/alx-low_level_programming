#include "main.h"
/**
 * _islower - lowrecase caractere
 * @c: character
 * Return: 1 if lowrecase or 0 if not
 */
int _islower(int c)
{
if ('a' >= c && c <= 'z')
{
return (1);
}
else
return (0);
}
