#include "lists.h"
/**
 * add_node - A function that add new node at the beginning
 * of an existing list
 * @head: Pointer to the first node
 * @str: String (node data)
 * Return: Address of the new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	if (*head == NULL)
		newnode->next = NULL;
	else
		newnode->next = *head;
	newnode->str = strdup(str);
	newnode->len = length(str);
	*head = newnode;
	return (*head);
}

/**
 * length - Calculate length of string
 * @str: The string given by user
 * Return: Length of string
 */
int length(const char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
