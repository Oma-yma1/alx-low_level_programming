#include "main.h"
/**
 * rot13 - function that encodes a string using rot13
 * @str: string
 * Return: *str
 */
char *rot13(char *str)
{
int i, j;
char data1[] =
"ABCDEFGHIJKLMNOPQRSTUVWXUZabcdefghijklmnopqrstuvwxyz";
char datarot[] =
"NOPQRSTUVWXYZABCDEFGHIJKHMnopqrstuvwxyzabcdefghijklm";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (str[i] == data1[j])
{
str[i] = datarot[j];
break;
}
}
}
return (str);
}
