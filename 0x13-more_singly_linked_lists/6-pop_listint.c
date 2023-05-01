#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: pointer
 * Return: 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
int number;
listint_t *t;
if (*head == NULL || head == NULL)
return (0);
number = (*head)->n;
t = (*head)->next;
free(*head);
*head = t;
return (number);
}
