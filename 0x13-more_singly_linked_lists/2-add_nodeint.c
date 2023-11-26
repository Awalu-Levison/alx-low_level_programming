#include "lists.h"
/**
 * add_nodeint - Adding new node at beginning of a list
 * @head: Pointer to the first node
 * @n: Number of elements
 * Return: Address of the new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	while (n)
	{
		struct node *new_node;

		new_node = (struct node *)malloc(sizeof(struct node));
		new_node->next = head;
		head = new_node;
	}
	return (new_node);
}
