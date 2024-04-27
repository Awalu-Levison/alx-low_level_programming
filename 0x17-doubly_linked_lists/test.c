#include "lists.h"
/**
 * get_dnodeint_at_index - Get node at a given index
 * @head: Reference to the first node
 * @index: Position of the node
 * Return: The node identified
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	dlistint_t *current_node = head;

	while (current_node->prev != NULL)
		current_node = current_node->prev;

	for (i = 0; i < index && current_node != NULL; i++)
		current_node = current_node->next;
	return current_node;
}
