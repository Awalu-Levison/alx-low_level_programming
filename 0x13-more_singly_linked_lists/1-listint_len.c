#include "lists.h"
/**
 * listint_len - A function that returns number of nodes
 * @h: Header point
 * Return: No of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t j; /*counter*/

	if (h == NULL)
		return (0);

	for (j = 0; h != NULL; j++)
	{
		h = h->next;
	}
	return (j);
}
