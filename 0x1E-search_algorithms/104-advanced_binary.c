#include "search_algos.h"
/**
* binary_search_helper - searches  function
* @array: array
* @left: left boun
* @right: right boun
* @value: number search
* Return: the index
*/
int binary_searchh(int *array, size_t left, size_t right, int value);
int binary_searchh(int *array, size_t left, size_t right, int value)
{
unsigned int j = left;
size_t m = (right - left) / 2 + left;

printf("Searching in array:");
while (j <= right)
{
printf(" %d", array[j]);
if (j < right)
printf(",");
j++;
}
printf("\n");
if (left == right)
return (-1);
if (left == right - 1)
{
if (array[left] == value)
return (left);
if (array[right] == value)
return (right);
}
if (array[m] >= value)
return (binary_searchh(array, left, m, value));
return (binary_searchh(array, m + 1, right, value));
}
/**
* advanced_binary - searches  functionn
* @array: array
* @size: size
* @value: number
* Return: index
*/
int advanced_binary(int *array, size_t size, int value)
{
if (!array || size == 0)
return (-1);

return (binary_searchh(array, 0, size - 1, value));
}
