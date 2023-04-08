#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
int i;
unsigned int j, sum = 0;
char *a;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
a = argv[i];
for (j = 0; j < strlen(a); j++)
{
if (a[j] < 48 || a[j] > 57)
{
printf("Error\n");
return (1);
}
}
sum += atoi(a);
a++;
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}
