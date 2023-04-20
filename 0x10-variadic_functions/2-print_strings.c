#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: string between two strings
 * @n: number of strings
 * @...: variable number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int j;
va_start(ap, n);
for (j = 0; j < n; j++)
{
printf("%s", va_arg(ap, char *));
if (va_arg(ap, char *) == NULL)
printf("(nil)");
else if (j != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
