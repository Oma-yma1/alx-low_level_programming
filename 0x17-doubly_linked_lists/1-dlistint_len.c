#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements
 * @h: a pointer
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cou = 0;

	while (h != NULL)
	{
		cou++;
		h = h->next;
	}
	return (cou);
}
