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
ind = 0;
i = 0;

do {
prev = list;
i++;
ind = i *j;

while (list->next && list->ind < ind)
list = list->next;

if (list->next == NULL && ind != list->ind)
ind = list->ind;

printf("Value checked at index [%d] = [%d]\n", (int)ind, list->n);

} while (ind < size && list->next && list->n < value);

printf("Value found between indexes ");
printf("[%d] and [%d]\n", (int)prv->index, (int)list->ind);
for (; prv && prv->ind <= list->ind; prv = prv->next)
{
printf("Value checked at index [%d] = [%d]\n", (int)prv->ind, prv->n);
if (prv->n == value)
return (prv);
}
return (NULL);
}
