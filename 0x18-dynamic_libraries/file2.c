#include "main.h"
/**
 * _isdigit - digit integer
 * @c: integer
 * Return: 1 if cdigit or 0 if not
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
/**
 * _strlen - lenght of str
 * @s: string
 * Return: lenght
 */
int _strlen(char *s)
{
int lenght = 0;
while (*s != '\0')
{
lenght++;
s++;
}
return (lenght);
}
/**
 * _puts - string to stdout up
 * @s: string
 * Return: 0 if sucess
 */
void _puts(char *s)
{
int i = 0;
while (s[i])
{
_putchar(s[i]);
i++;
}
_putchar('\n');
}
/**
 * _strcpy - copy string
 * @dest: destination
 * @src: source
 * Return: the string
 */
char *_strcpy(char *dest, char *src)
{
int j = 0;
int k = 0;
while (*(src + j) != '\0')
{
j++;
}
for (; k < j; k++)
{
dest[k] = src[j];
}
dest[j] = '\0';
return (dest);
}
/**
 * _atoi - string to integer
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
int so = 1, i = 0;
unsigned int in = 0;
while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
{
if (s[i] == '-')
so *= -1;
i++;
}
while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
{
in = (in * 10) + (s[i] - '0');
i++;
}
in *= so;
return (in);
}
