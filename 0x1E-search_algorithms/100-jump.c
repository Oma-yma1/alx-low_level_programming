#include "search_algos.h"
#include <math.h>
/**
* jump_search - function jump
* @array: array
* @size: size
* @value: value
* Return: index
*/
int jump_search(int *array, size_t size, int value)
{
int in, i, j, p;
if (array == NULL || size == 0)
return (-1);

i = (int)sqrt((double)size);
j = 0;
p = in = 0;

do {
printf("Value checked array[%d] = [%d]\n", in, array[in]);

if (array[in] == value)
return (in);
j++;
p = in;
in = j *i;
} while (in < (int)size && array[in] < value);

printf("Value found between indexes [%d] and [%d]\n", p, in);

for (; p <= in && p < (int)size; p++)
{
printf("Value checked array[%d] = [%d]\n", p, array[p]);
if (array[p] == value)
return (p);
}

return (-1);
}
