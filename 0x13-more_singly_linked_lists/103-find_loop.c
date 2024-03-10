#include "lists.h"

/**
 * find_listint_loop - Find the loop in a linked list
 * @head: Pointer to the first node
 * Return: Address where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fnode = head;
	listint_t *snode = head;

	if (head == NULL)
		return (NULL);
	while (fnode && snode && snode->next)
	{
		snode = snode->next->next;
		fnode = fnode->next;

		if (fnode == snode)
		{
			fnode = head;
			while (fnode != snode)
			{
				fnode = fnode->next;
				snode = snode->next;
			}
			return (snode);
		}
	}
	return (NULL);
}
