#include "main.h"
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
