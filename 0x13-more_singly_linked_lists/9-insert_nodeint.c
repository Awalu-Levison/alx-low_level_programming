#include "lists.h"
listint_t *new_node_creation(int n);

/**
 * new_node_creation - Creating a new node
 * @n: Data defined in the list
 * Return: The new node
 */
listint_t *new_node_creation(int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}

/**
 * insert_nodeint_at_index - Insert node at given index
 * @head: Pointing to first node
 * @idx: Index at which the new node is to be added
 * @n: Data inside the node
 * @Return: The new address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx,	int n)
{
	unsigned int i;
	listint_t *holder1;
	listint_t *holder2;
	listint_t *new; /*New node*/

	holder1 = *head;
	if (head == NULL)
		return (NULL);

	new = new_node_creation(n);
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	if (idx == 0)
		*head = new;
	for (i = 0; i < idx - 1 && holder1 != NULL && idx != 0; i++)
		holder1 = holder1->next;
	if (holder1 == NULL)
		return (NULL);
	if (idx == 0)
		new->next = holder1;
	else
	{
		holder2 = holder1->next;
		holder1->next = new;
		new->next = holder2;
	}
	return (new);
}
