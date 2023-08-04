#include "main.h"
/**
 * reset_to_98 - Reseting the pointer variable to the value of 98
 * @n: Integer variable to use
 */
void reset_to_98(int *n)
{
	n = 0;
	*n = &n;
	*n = 98;
}
