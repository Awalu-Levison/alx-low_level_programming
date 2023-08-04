#include "main.h"
/**
 * swap_int - A function that swaps two integer values using pointers
 * @a: First integer to be swapped
 * @b: Second integer to be swapped
 */
void swap_int(int *a, int *b)
{
	int swap_point;

	swap_point = *a;

	*a = *b;

	*b = swap_point;
}
