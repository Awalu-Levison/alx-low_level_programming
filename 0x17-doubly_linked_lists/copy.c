#include "lists.h"
/**
 * insert_dnodeint_at_index - Insert a node at particular index
 * @h: Reference to the fisrt node
 * @idx: Indexfor the data to insert
 * @n: Data added to the node
 * Return: Address of new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new = NULL;
	dlistint_t *current = *h;

	new = add_dnodeint(h, n);

	if (*h == NULL)
	{
		*h = new;
		return (*h);
	}

	i = 0;
	while (current != NULL && i < idx)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		dlistint_t *last = *h;

		while (last->next != NULL)
			last = last->next;
		last->next = new;
		new->prev = last;
		return (*h);
	}

	/*Adjust pointer to add node*/
	new->next = current;
	new->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = new;
	current->prev = new;

	if (i == 0)
		*h = new;
	return (*h);
}
