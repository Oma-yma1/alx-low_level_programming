#include "main.h"
#include <stdio.h>
int _sqrt(int n, int j);
/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: number
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
/**
 * _sqrt - return natural square root
 * @n: number
 * @j: iterate number
 * Return: natural square root
 */
int _sqrt(int n, int j)
{
int sqrt = j * j;
if (sqrt > n)
	return (-1);
if (sqrt == n)
	return (j);
return (_sqrt(n, j + 1));
}
