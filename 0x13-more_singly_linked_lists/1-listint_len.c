#include "lists.h"
/**
 * listint_len - Length of elenents in a linked list
 * @h: Pointer to the next node
 * Return: No of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0; /*No of elements*/

		while (h != NULL)
		{
			n++;
			h = h->next;
		}
	return (n);
}
