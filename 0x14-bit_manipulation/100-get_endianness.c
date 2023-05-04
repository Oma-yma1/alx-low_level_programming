#include "main.h"
/**
 * get_endianness - a function that checks the endianness
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
int j = 1;
char *num = (char *) &j;
return (*num);
}
