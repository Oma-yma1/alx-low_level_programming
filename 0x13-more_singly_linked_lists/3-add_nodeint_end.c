#include "lists.h"
/**
 * add_nodeint_end - adds a nex node at the end
 * @head: pointer
 * @n: integer
 * Return: adress of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_add;
listint_t *tmp = *head;
new_add = malloc(sizeof(listint_t));
if (new_add == NULL)
return (NULL);
new_add->n = n;
new_add->next = NULL;
if (*head == NULL)
{
*head = new_add;
}
else
{
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = new_add;
}
return (new_add);
}
