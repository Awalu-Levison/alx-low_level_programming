#include "lists.h"
/**
 * sum_listint - Get the sum of all data in the list
 * @head: Pointer to the first node of the linked list
 * Return: sum
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
