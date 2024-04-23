#include "lists.h"
/**
 * add_dnodeint_end - A function that adds new node at the end
 * of the given doubly linked list
 * @head: Reference to the first node
 * @n: The data initialised
 * Return: Address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new_node;

	if (head == NULL || *head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	temp = (*head);
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;
	new_node->prev = temp;

	return (*head);
}
