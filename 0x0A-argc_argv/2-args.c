#include<stdio.h>
/**
 * main -  program that prints all arguments it receives
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
int j;
for (j = 0; j < argc; j++)
{
printf("%s\n", argv[j]);
}
return (0);
}
