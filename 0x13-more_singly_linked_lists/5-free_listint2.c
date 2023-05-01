#include "lists.h"
/**
 * free_listint2 - frees a listint_t
 * @head: pointer
 */
void free_listint2(listint_t **head)
{
listint_t *t;
if (head == NULL)
return;
while (*head != NULL)
{
t = (*head)->next;
free(*head);
*head = t;
}
*head = NULL;
}
