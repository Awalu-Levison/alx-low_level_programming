#include "lists.h"
/**
 * dlistint_len - A function that returns number of elements
 * in a doubly linked list
 * @h: Reference to the first node
 * Return: Number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	/*const dlistint_t *temp = h;*/

	if (h == NULL)
		return (i);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
