#include "lists.h"
/**
 * get_nodeint_at_index - Get node at given position (index)
 * @head: Pointer to the first node
 * @index:Position of the node
 * Return: The node in particular position
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (counter < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		counter++;
	}
	return (head);
}
