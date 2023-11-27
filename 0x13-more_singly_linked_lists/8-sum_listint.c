#include "lists.h"
/**
 * sum_listint - Calculating the sum of nodes in a linked list
 * @head: Pointer to the first node
 * Return: The list or 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
