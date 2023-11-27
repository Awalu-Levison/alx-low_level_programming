#include "lists.h"
/**
 * free_listint - Free memory of a linked list
 * @head: Pointer to the firsty node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *i; /*i: iterator(temporary pointer)*/

	while (head)
	{
		i = head->next;
		free(head);
		head = i;
	}
}
