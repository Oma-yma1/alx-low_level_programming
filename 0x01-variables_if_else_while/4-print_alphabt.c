#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase
 * Return: 0 success
 */
int main(void)
{
char i;
for (i = 'a' ; i <= 'z' ; i++)
if (i != 'q' && i != 'e')
putchar(i);
putchar('\n');
return (0);
}
