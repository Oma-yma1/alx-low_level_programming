#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function given as a parameter on element ofarray
 * @array: array
 * @action: action
 * @size: size of the array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int j;
if (action != NULL && array != NULL)
{
for (j = 0; j < size; j++)
{
action(array[j]);
}
}
}
