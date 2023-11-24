#include "lists.h"
/**
 * add_node_end - Adding a node at the end of a list
 * @head: Pointer to the next node
 * @str: String passed to the function
 * Return: Added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node1, *node2;
	size_t n;

	node1 = malloc(sizeof(list_t));
	if (node1 == NULL)
		return (NULL);
	node1->node1 = strdup(str);

	for (n = 0; str[n]; n++)
		;
	node1->len = n;
	node1->next = NULL;
	node1 = *head;

	if (node2 == NULL)
	{
		*head = node1;
	}
	else
	{
		while (node1->next != NULL)
			node1 = node1->next;
		node1->next = node2;
	}
	return (*head);
}
