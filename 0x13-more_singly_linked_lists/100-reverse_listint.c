#include "lists.h"
/**
 * reverse_listint - A function that reverses a listint_t linked list.
 * @head: Pointer to the first node in a linked list
 * Return: The first reversed node of a list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a = NULL; /*a: previous node*/
	listint_t *b = NULL; /*b: next node*/

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = b;
		b = *head;
		*head = next;
	}
	*head = a;

	return (*head);
}
