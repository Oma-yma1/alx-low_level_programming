#include "lists.h"
/**
 * reverse_listint - reverses a listint_t
 * @head: pointer
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *next = NULL;
listint_t *previous = NULL;
while (*head != NULL)
{
next = (*head)->next;
(*head)->next = previous;
previous = *head;
*head = next;
}
*head = previous;
return (previous);
}
