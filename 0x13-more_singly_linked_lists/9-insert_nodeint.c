#include "lists.h"
/**
 * insert_nodeint_at_index - Add node to the linked list
 * at a given position
 * @head: Pointer to the first node
 * @idx: Position to be used
 * @n: Number of elements
 * Return: Newly added node or NULL if fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp;
	unsigned int j = 0;
	int i = 0;

		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = NULL;

		return (new_node);
		tmp = *head;
		tmp = tmp->next;
		i++;
		new_node->next = tmp->next;
		tmp->next = new_node;

	return (new_node);
}
