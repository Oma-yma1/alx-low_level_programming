#include "search_algos.h"

/**
* linear_search - function linear search
* @array: array
* @size: size
* @value: value search
* Return: always success
*/
int linear_search(int *array, size_t size, int value)
{
size_t j;

if (array == NULL)
return (-1);

for (j = 0; j < size; j++)
{
printf("Value checked array[%lu] = [%d]\n", j, array[j]);
if (array[j] == value)
return (j);
}

return (-1);
}
