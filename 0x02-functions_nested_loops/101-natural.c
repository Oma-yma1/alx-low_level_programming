#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0 success
 */
int main(void)
{
int a, b = 0;
while (a < 1024)
{
if ((a % 3 == 0) || (a % 5 == 0))
{
b += a;
}
a++;
}
printf("%d\n", b);
return (0);
}
