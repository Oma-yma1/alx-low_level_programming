#include "lists.h"
/**
 * listint_len - returns thenumber of elements
 * @h: list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t number;
for (number = 0; h != NULL; h = h->next)
{
number++;
}
return (number);
}
