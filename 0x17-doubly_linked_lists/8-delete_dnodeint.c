#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index
 * @head: pointer head
 * @index: index
 * Return: 1 or -1 if list is null
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int j = 0;
dlistint_t *list;
if (head == NULL || *head == NULL)
return (-1);
list = *head;
for (j = 0; j < index && list != NULL; j++)
list = list->next;
if (list == NULL)
return (-1);
if (list->prev != NULL)
list->prev->next = list->next;
else
*head = list->next;
if (list->next != NULL)
list->next->prev = list->prev;
free(list);
return (1);
}
