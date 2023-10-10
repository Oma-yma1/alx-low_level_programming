#include "search_algos.h"
#include <math.h>
/**
 * exponential_search - function expo
 * @array: array
 * @left: size
 * @right: right
 * @value: value
 * Return: index
 */
int biinary_search(int *array, int left, int right, int value);

int exponential_search(int *array, size_t size, int value)
{
int b = 1;
int left;
int right;

if (array == NULL || size == 0)
return (-1);
while (b < (int)size && array[b] < value)
{
printf("Value checked array[%d] = [%d]\n", b, array[b]);
b *= 2;
}
left = b / 2;
right = (b < (int)size) ? b : (int)size - 1;
printf("Value found between indexes [%d] and [%d]\n", left, right);

return (biinary_search(array, left, right, value));
}

/**
 * biinary_search - function expo
 * @array: array
 * @left: size
 * @right: right
 * @value: value
 * Return: index
 */
int biinary_search(int *array, int left, int right, int value)
{
int m;
int i;
while (left <= right)
{
m = left + (right - left) / 2;
printf("Searching in array: ");
for (i = left; i <= right; i++)
{
printf("%d", array[i]);
if (i < right)
printf(", ");
else
printf("\n");
}
if (array[m] == value)
return (m);
else if (array[m] < value)
left = m + 1;
else
right = m - 1;
}

return (-1);
}
