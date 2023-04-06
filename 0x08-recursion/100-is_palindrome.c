#include "main.h"
int compar(char *s, int j, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - function that returns 1 if a s is a palindrome and 0 if not
 * @s: string
 * Return: a if s is palindrome and 0 if not
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (compar(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - lenght of string
 * @s: string
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
/**
 * compar - compare characters
 * @s: string
 * @j: iterator
 * @len: lenght of string
 * Return: 1 of s palindrome and 0 if not
 */
int compar(char *s, int j, int len)
{
if (*(s + j) != *(s + len - 1))
return (0);
if (j >= len)
return (1);
return (compar(s, j + 1, len - 1));
}

