#include "main.h"
/**
 * get_endianness - A function that checks the endianness.
 * Return: 0 - big endian or 1 - little endian
 */
int get_endianness(void)
{
	int i;
	char *j;

	j = (char *)&i;
	return (*j);
}
