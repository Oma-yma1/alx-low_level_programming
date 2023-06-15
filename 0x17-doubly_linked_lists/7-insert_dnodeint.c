#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head
 * @idx: index
 * @n: number
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *node_new, *tmp = *h;
if (idx == 0)
return (add_dnodeint(h, n));
for (; idx != 1; idx--)
{
tmp = tmp->next;
if (tmp == NULL)
return (NULL);
}
if (tmp->next == NULL)
return (add_dnodeint_end(h, n));
node_new = malloc(sizeof(dlistint_t));
if (node_new == NULL)
return (NULL);
node_new->n = n;
node_new->prev = tmp;
node_new->next = tmp->next;
tmp->next->prev = node_new;
tmp->next = node_new;
return (node_new);
}
