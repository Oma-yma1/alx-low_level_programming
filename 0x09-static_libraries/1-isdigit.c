#include "main.h"
/**
 * _isdigit - checks if a integer is digit
 * @c: int
 * Return: 1 if c is a digit or 0 if not
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
