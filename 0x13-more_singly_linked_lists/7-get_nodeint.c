#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer
 * @index: index
 * Return: nth node or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int j = 0;
for (; head != NULL && j < index; j++)
{
head = head->next;
}
return (head == NULL ? NULL : head);
}
