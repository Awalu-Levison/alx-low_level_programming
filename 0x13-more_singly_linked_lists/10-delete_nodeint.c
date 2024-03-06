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
	listint_t *temp, *prevptr = NULL;

	temp = *head;
	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; temp != NULL && i < index; i++)
	{
		prevptr = temp;
		temp = temp->next;
	}

	if (temp == NULL)
		return (-1);
	prevptr->next = temp->next;
	free(temp);

	return (1);
}
