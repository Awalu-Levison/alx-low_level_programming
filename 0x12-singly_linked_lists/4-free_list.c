#include "lists.h"
/**
 * free_list - Frre up the list_t list
 * @head: Pointer to the next node
 * Return: void
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
