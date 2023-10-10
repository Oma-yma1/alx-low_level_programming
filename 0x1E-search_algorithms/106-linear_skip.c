#include "search_algos.h"
/**
* linear_skip - searches skip function
* @list: listt
* @value: value
* Return: index
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *no;

if (list == NULL)
return (NULL);

no = list;

do {
list = no;
no = no->express;
printf("Value checked at index ");
printf("[%d] = [%d]\n", (int)no->index, no->n);
} while (no->express && no->n < value);

if (no->express == NULL)
{
list = no;
while (no->next)
no = no->next;
}

printf("Value found between indexes ");
printf("[%d] and [%d]\n", (int)list->index, (int)no->index);

while (list != no->next)
{
printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
if (list->n == value)
return (list);
list = list->next;
}

return (NULL);
}
