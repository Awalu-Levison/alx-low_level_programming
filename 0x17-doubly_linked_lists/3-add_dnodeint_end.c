#include "lists.h"
/**
 * add_dnodeint_end - A function that add node at the end of the list
 * @head: Reference to the first node
 * @n: The data defined in a list
 * Return: Address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->n = n;

	i = *head;
	if (i != NULL)
	{
		while (i->next != NULL)
			i = i->next;
		i->next = new;
	}
	else
		*head = new;
	new->prev = i;
	return (new);
}
