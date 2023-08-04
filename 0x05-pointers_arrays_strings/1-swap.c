#include "main.h"
/**
 * swap_int - A function that swaps two integer values using pointers
 * @a: First integer to be swapped
 * @b: Second integer to be swapped
 */
void swap_int(int *a, int *b)
{
	*a = *b;

	/*Swapping values in memory addresses*/
	swap(&a, &b);
}
