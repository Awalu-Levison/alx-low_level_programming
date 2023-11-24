#include "lists.h"
/**
 * list_len -A function that calculates number of elements
 * @h: Pointer to the next node
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
