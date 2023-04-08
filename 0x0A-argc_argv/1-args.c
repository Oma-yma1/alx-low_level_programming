#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
