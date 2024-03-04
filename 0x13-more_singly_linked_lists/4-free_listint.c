#include "lists.h"
/**
 * free_listint - Free up memory for a node
 * @head: Pointer to the first node of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head->next != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
