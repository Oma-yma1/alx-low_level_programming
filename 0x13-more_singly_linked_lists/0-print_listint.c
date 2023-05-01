#include "lists.h"
/**
 * print_listint - prints all elements of a listint_t
 * @h: list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t number = 0;
for (; h != NULL; h = h->next)
{
printf("%d\n", h->n);
number++;
}
return (number);
}

