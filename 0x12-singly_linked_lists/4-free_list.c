#include "lists.h"
/**
 * free_list - A functuin that frees a linked list
 * @head: Header pointer to the first node
 */
void free_list(list_t *head)
{
	list_t *i; /*i: temporary var*/

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		i = head->next;
		free(head->str);
		free(head);
		head = i;
	}
}
