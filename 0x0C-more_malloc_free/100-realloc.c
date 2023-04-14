#include "main.h"
/**
 * _realloc - function that reallocates a memory block
 * @ptr: pointer to the memory previously allocated by malloc
 * @old_size: the size of the allocated space for ptr
 * @new_size: new size in bytes of the new memory block
 * Return: a pointer allocate new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *pt = ptr;
char *ptr1;
unsigned int j;
if (new_size == old_size)
{
return (ptr);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (ptr == NULL)
{
ptr1 = malloc(new_size);
return (ptr1);
}
ptr1 = malloc(new_size);
if (ptr1 == NULL)
return (NULL);
if (new_size > old_size)
for (j = 0; j < old_size; j++)
ptr1[j] = pt[j];
free(ptr);
return (ptr1);
}
