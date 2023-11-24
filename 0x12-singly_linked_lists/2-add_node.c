#include "lists.h"
/**
 * add_node - Adding new node
 * @head: Pointer to the next node
 * @str: String passed to the function
 * Return: Address of (New element or Null)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr; /*temporary pointer*/
	int x = 0; /*x: length*/

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	while (ptr[x])
		x++;
	ptr->len = x;
	ptr->str = strdup(str);
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
