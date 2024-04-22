#include "lists.h"
/**
 * add_dnodeint - A function that add node at the beginning of a list
 * @head: The reference of the first node
 * @n: The data defined in the list
 * Return: The newly added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	new_node = (malloc(sizeof(dlistint_t)));

	if (new_node == NULL)
		return (NULL);

	/*Create node*/
	new_node->prev = NULL;
	new_node->next = NULL;
	new_node->n = n;

	/*Add the node*/
	new_node->next = (*head)->next;
	(*head)->prev = new_node;
	(*head) = new_node;
	return (*(head));
}
