#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array f chars
 * and initializes it with a specific char
 * @c: char value
 * @size: size of array
 * Return:  a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
unsigned int j;
char *array;
if (size == 0)
return (NULL);
array = (char *)malloc(size * sizeof(char));
if (array == NULL)
return (NULL);
for (j = 0; j < size; j++)
array[j] = c;
return (array);
}
