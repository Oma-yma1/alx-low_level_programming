#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
size_t n = 0;
for (; h != NULL; h = h->next)
{
if (h->str == NULL)
printf("[0](nil)\n");
else
printf("[%u]%s\n", h->len, h->str);
n++;
}
return (n);
}
