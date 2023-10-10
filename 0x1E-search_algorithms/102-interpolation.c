#include <math.h>
#include "search_algos.h"

/**
* interpolation_search - searches for a value
* @array: array
* @size: size
* @value: valu
* Return: index
*/
int interpolation_search(int *array, size_t size, int value)
{
size_t a, l, h;
double fu;
if (array == NULL)
return (-1);
l = 0;
h = size - 1;
while (size)
{
fu = (double)(h - l) / (array[h] - array[l]) * (value - array[l]);
a = (size_t)(l + fu);
printf("Value checked array[%d]", (int)a);

if (a >= size)
{
printf(" is out of range\n");
break;
}
else
{
printf(" = [%d]\n", array[a]);
}
if (array[a] == value)
return ((int)a);
if (array[a] < value)
l = a + 1;
else
h = a - 1;
if (l == h)
break;
}
return (-1);
}
