#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes
 * @argv: array argument
 * @argc: num of argument
 * Return: 0 success
 */
int main(int argc, char **argv)
{
int b, i;
char *array;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
b = atoi(argv[1]);
if (b < 0)
{
printf("Error\n");
exit(2);
}
array = (char *)main;
for (i = 0; i < b; i++)
{
printf("%02hhx", array[i]);
if (i < b - 1)
printf(" ");
}
printf("\n");
}
