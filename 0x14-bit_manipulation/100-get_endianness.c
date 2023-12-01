#include "main.h"
/**
 * get_endianness - Checking whether endiannes is
 * big or little
 * Return: 0: if big or 1: if little
 */
int get_endianness(void)
{
	int i;
	char *j;

	i = 1;
	j = (char *)&i;

	return (*j);
}
