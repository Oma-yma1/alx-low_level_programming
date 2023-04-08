#include <stdio.h>
#include <stdlib.h>
/**
 * main - the minimum number of coins to make change for an amount of money
 * @argc: arg count
 * @argv: atg vector
 * Return: 1 if the number of arguments is not exactly 1 or 0 otherwise
 */
int main(int argc, char *argv[])
{
int cent, coi = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cent = atoi(argv[1]);
while (cent > 0)
{
coi++;
if ((cent - 25) >= 0)
{
cent -= 25;
continue;
}
if ((cent - 10) >= 0)
{
cent -= 10;
continue;
}
if ((cent - 10) >= 0)
{
cent -= 10;
continue;
}
if ((cent - 5) >= 0)
{
cent -= 5;
continue;
}
if ((cent - 2) >= 0)
{
cent -= 2;
continue;
}
cent--;
}
printf("%d\n", coi);
return (0);
}
