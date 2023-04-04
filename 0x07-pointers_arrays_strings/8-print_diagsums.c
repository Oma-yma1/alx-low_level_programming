#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - the sum of the two diagonals of a square matrix of integers
 * @a: array
 * @size: size
 * Return: alawys 0
 */
void print_diagsums(int *a, int size)
{
int sum0, sum1, i, j;
sum0 = 0;
sum1 = 0;
for (i = 0; i < size; i++)
{
sum0 = sum0 + a[i * size + i];
}
for (j = 0; j < size ; j++)
{
sum1 = sum1 + a[j * size + (size - j - 1)];
}
printf("%d, %d\n", sum0, sum1);
}
