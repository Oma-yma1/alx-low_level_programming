#include "lists.h"
/**
 * sum_listint - returns the sum of all thedata(n)
 * @head: pointer
 * Return: sum
 */
int sum_listint(listint_t *head)
{
int sum;
listint_t *t = head;
for (sum = 0; t != NULL; t = t->next)
{
sum += t->n;
}
return (sum);
}
