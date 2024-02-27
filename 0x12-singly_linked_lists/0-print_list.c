#include "lists.h"
/**
 * print_list - Printing elements in a linked list
 *
 * @h: Pointer to first node
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	int j = 1;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("%u %s\n", h->len, "(nil)");
		else
		{
			printf("%u %s\n", h->len, h->str);
		}
		h = h->next;
		j++;
	}
	printf("%u %s\n", h->len, "(nil)");
	return (j);

}
