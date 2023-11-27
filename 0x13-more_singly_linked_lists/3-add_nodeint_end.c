#include "lists.h"
/**
 * add_nodeint_end - A function to add node at the end of the linked list
 * @head: Pointer to the next node
 * @n: Structure variable of type int
 * Return: Address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *i; /*i: last node*/

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		i = *head;
		while (i->next != NULL)
			i = i->next;
		i->next = new_node;
	}
	return (new_node);
}
