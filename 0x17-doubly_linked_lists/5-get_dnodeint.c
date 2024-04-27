#include "lists.h"
/**
 * get_dnodeint_at_index - Return nth node of the linked list in C
 * @head: Reference to the first node
 * @index: Position of the node
 * Return: The required node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	dlistint_t *current = head;

	while (current != NULL && i != index)
	{
		current = current->next;
		i += 1;
	}
	/*Check index validity*/
	if (i == index && current != NULL)
		return (current);
	else
		return (NULL);
}
