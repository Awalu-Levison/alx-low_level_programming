#include "lists.h"
/**
 * pop_listint - Delete the node and return its data
 * @head: The node to be deleted
 * Return: Data of the head (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *i; /*i: temporary pointer*/
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	i = *head;
	*head = (*head)->next;
	free(i);
	return (n);
}
