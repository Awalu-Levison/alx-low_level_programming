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
	unsigned int i = 0;
	dlistint_t *new = NULL;
	dlistint_t *temp = *h;
	dlistint_t *last = NULL;

	new = add_dnodeint(&(*h), n);

	while (i < idx)
	{
		temp = temp->next;
		i++;
	}
	last = temp->next;

	temp->next = new;
	last->prev = new;
	new->prev = temp;
	new->next = last;
	return (*h);
}
