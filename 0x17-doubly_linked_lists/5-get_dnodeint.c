#include "lists.h"
/**
 * get_dnodeint_at_index - Get node at a given index
 * @head: Reference to the first node
 * @index: Position of the node
 * Return: The node identified
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		if (counter == index)
			break;
		head = head->next;
		counter++;
	}
	return (head);
}
