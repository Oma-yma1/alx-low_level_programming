#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @a: number to be computed
 * Return: absolute value of number or zero
 */
int _abs(int a)
{
if (a < 0)
{
a = -1 * a;
}
else if (a >= 0)
a = a;
return (a);
}
