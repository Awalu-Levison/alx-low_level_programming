#include "lists.h"
/**
 * reverse_listint - Reverse linked list and return pointer
 * to the first node of that list
 * @head: Pointer to the first node of the list
 * Return: Pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr1, *ptr2;

	if (head == NULL || *head == NULL)
		return (NULL);
	ptr1 = *head;
	*head = ptr1->next;
	ptr1->next = NULL;

	while (*head != NULL)
	{
		ptr2 = (*head)->next;
		(*head)->next = ptr1;
		ptr1 = *head;
		if (ptr2 == NULL)
			return (*head);
		*head = ptr2;
	}
	if (*head == NULL)
		*head = ptr1;
	return (*head);
}
