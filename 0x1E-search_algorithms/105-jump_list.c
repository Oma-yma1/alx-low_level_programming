#include "search_algos.h"
#include <math.h>
/**
* jump_list - searches jump list
* @list: list
* @size: size
* @value: value
* Return: index
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t index, i, j;
listint_t *prv;

if (list == NULL || size == 0)
return (NULL);

j = (size_t)sqrt((double)size);
index = 0;
i = 0;

do {
prv = list;
i++;
index = i *j;
while (list->next && list->index < index)
list = list->next;

if (list->next == NULL && index != list->index)
index = list->index;

printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);

} while (index < size && list->next && list->n < value);

printf("Value found between indexes ");
printf("[%d] and [%d]\n", (int)prv->index, (int)list->index);
for (; prv && prv->index <= list->index; prv = prv->next)
{
printf("Value checked at index [%d] = [%d]\n", (int)prv->index, prv->n);
if (prv->n == value)
return (prv);
}
return (NULL);
}
