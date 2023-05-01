#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: pointer
 */
void free_listint(listint_t *head)
{
listint_t *t;
for (; head != NULL; t = head->next)
{
free(head);
head = t;
}
}
