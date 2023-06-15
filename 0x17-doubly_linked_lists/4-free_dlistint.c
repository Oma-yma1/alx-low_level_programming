#include "lists.h"
/**
 * free_dlistint -  a function that frees a dlistint_t list
 * @head: head pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *list;

	while (head != NULL)
	{
		list = head;
		head = head->next;
		free(list);
	}
}
