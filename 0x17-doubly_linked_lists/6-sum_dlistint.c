#include "lists.h"

/**
 * sum_dlistint - Sum up of all data in a doubly linked list
 * @head: Reference to the first node of the linked list
 *
 * Return: sum of all data, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
