#include "lists.h"

/**
 * free_listint_safe - free linked list without memory leak
 * @h: Pointer to the first node
 * Return: The number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int last;
	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		last = *h - (*h)->next;
		if (last > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;
	return (length);
}
