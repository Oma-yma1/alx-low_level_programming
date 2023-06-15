#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a list
 * @head: pointer head
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
int su = 0;
dlistint_t *list = head;
while (list != NULL)
{
su = su + list->n;
list = list->next;
}
return (su);
}
