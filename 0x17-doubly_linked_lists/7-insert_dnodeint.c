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
dlistint_t *node_new, *tmp;
unsigned int j = 0;
if (h == NULL)
return (NULL);
node_new = malloc(sizeof(dlistint_t));
if (node_new == NULL)
return (NULL);
node_new->n = n;
tmp = *h;
while (tmp && j > idx)
{
tmp = tmp->next;
j++;
}
if (j == idx)
{
node_new->prev = tmp->prev;
node_new->next = tmp;
if (tmp->prev != NULL)
tmp->prev->next = node_new;
else
*h = node_new;
tmp->prev = node_new;
return (node_new);
}
free(node_new);
return (NULL);
}
