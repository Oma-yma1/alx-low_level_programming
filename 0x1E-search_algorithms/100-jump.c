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
int i;
int s = (int)sqrt(size);
int p = 0;
if (array == NULL)
return (-1);
printf("Value checked array[0] = [%d]\n", array[0]);

while (array[s] < value && s < (int)size)
{
printf("Value checked array[%d] = [%d]\n", s, array[s]);
p = s;
s += (int)sqrt(size);
}
printf("Value found between indexes [%d] and [%d]\n", p, s);
for (i = p; i <= s && i < (int)size; i++)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
