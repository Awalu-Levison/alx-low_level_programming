#include "lists.h"
/**
 * get_nodeint_at_index - A function that returns a node
 * at certain position
 * @head: Pointer to the first node
 * @index: Position of the node
 * Return: Node identified or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i; /*iterator*/

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
