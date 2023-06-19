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
/**
 * _isalpha - alpha function
 * @c: character
 * Return: 1 or 0 if not
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
/**
 * _abs - absolute value of integers
 * @n: integer
 * Return: abs
 */
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
return (-n);
}
/**
 * _isupper - uppercase letter
 * @c: character
 * Return: 1 if c is uppercase or 0 if not
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
