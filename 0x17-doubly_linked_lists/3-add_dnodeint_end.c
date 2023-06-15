#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end oflist
 * @head: pointer head
 * @n: number
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *end, *tmp;
end = malloc(sizeof(dlistint_t));
if (end == NULL)
	return (NULL);
end->n = n;
end->next = NULL;
if (*head == NULL)
{
end->prev = NULL;
*head = end;
return (end);
}
tmp = *head;
while (tmp->next != NULL)
	tmp = tmp->next;
tmp->next = end;
	end->prev = tmp;
	return (end);
	}
