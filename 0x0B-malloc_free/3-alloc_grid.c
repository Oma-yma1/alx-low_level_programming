#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
int **array;
int j, k;
if (width <= 0 || height <= 0)
return (NULL);
array = (int **)malloc(sizeof(int *) * height);
if (array == NULL)
return (NULL);
for (j = 0; j < height; j++)
{
array[j] = (int *)malloc(sizeof(int) * width);
if  (array[j] == NULL)
{
for (j--; j >= 0; j--)
free(array[j]);
free(array);
return (NULL);
}
}
for (j = 0; j < height; j++)
{
for (k = 0; k < width; k++)
array[j][k] = 0;
}
return (array);
}
