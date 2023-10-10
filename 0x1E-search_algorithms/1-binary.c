#include "search_algos.h"

/**
* binary_search - function search using binary search
* @array: array
* @size: size
* @value: value
* Return:  index where value is locat
*/
int binary_search(int *array, size_t size, int value)
{
int i;
int gau = 0;
int dro = size - 1;
int j = gau + (dro - gau) / 2;
if (array == NULL)
return (-1);
while (gau <= dro)
{
printf("Searching in array: ");
for (i = gau; i <= dro; i++)
{
printf("%d", array[i]);
if (i < dro)
printf(", ");
else
printf("\n");
}
if (array[j] == value)
return (j);
else if (array[j] < value)
gau = j + 1;
else
dro = j - 1;
}
return (-1);
}
