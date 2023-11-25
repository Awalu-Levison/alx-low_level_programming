#include "lists.h"
/**
 * add_node_end - Adding a node at the end of a list
 * @head: Pointer to the next node
 * @str: String passed to the function
 * Return: Added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *old;
	size_t n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->new = strdup(str);

	for (n = 0; str[n]; n++)
		;
	new->len = n;
	new->next = NULL;
	new = *head;

	if (new == NULL)
	{
		*head = new;
	}
	else
	{
		while (new->next != NULL)
			new = new->next;
		new->next = old;
	}
	return (*head);
}
