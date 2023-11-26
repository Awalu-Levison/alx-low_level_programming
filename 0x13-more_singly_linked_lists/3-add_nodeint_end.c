#include "lists.h"
/**
 * add_nodeint_end - A function to add node at the end of the linked list
 * @head: Pointer to the next node
 * @n: Structure variable of type int
 * Return: Address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_code = (struct node *)malloc(sizeof(struct node));
	new_node->next = NULL;
	temp = head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_code;

	return (new_node);
}
