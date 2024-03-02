#include "lists.h"
/*int length(const char *str);*/
/**
 * length - Length of string
 * @str: Const string of characters
 * Return: Number of string
 */
int length(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * add_node_end - Adding node at the end of the list
 * @head: Pointer to the first node
 * @str: The string used
 * Return: Address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lastnode, *temp; /*temp: temporary var*/

	if (head == NULL)
	{
		return (NULL);
	}

	lastnode = malloc(sizeof(list_t));
	if (lastnode == NULL)
		return (NULL);

	lastnode->str = strdup(str);
	lastnode->len = length(str);
	temp = *head;
	lastnode->next = NULL;

	if (*head == NULL)
	{
		*head = lastnode;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = lastnode;
	return (*head);
}
