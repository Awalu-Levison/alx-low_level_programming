#include "lists.h"
/**
 * delete_nodeint_at_index - Delete node at given index
 * @head: Pointer to the first node
 * @index: Position of nodes
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *node;

	temp = *head; /*Asign list to temp var*/
	if (head == NULL || *head == NULL)
		return (-1);

	for (i = 0; i < index && temp != NULL && index != 0; i++)
		temp = (*head)->next;
	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		node = temp->next;
		free(temp);
		(*head) = node;
	}
	else
	{
		if (temp->next == NULL)
			node = temp->next;
		else
			node = temp->next->next;
		free(temp->next);
		temp->next = node;
	}
	return (1);
}
