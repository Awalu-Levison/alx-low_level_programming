#include "lists.h"
void freemylist(list_s **head);
/**
 * freemylist - Free up memory space
 * @head: Pointer to the first node
 */
void freemylist(list_s **head)
{
	list_s *current;
	list_s *nextptr;

	current = *head; /*Assign list to current var*/

	while (current != NULL)
	{
		nextptr = current->next;
		free(current);
		current = nextptr;
	}
	*head = NULL;
}
/**
 * print_listint_safe - Safe list printing
 * @head: Pointer to the first node
 * Return: Number of nodes of the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;

	const listint_t *ptr1;
	const listint_t *ptr2;

	ptr1 = head;
	ptr2 = head;

	if (head == NULL)
		exit(98);
	while (ptr2 != NULL && ptr2->next != NULL)
	{
		printf("[%p] %d\n", (void *)ptr1, ptr1->n);

		ptr1 = ptr1->next;

		ptr2 = ptr2->next->next;

		if (ptr1 == ptr2)
		{
			printf("-> [%p] %d\n", (void *)ptr1, ptr1->n);
			break;
		}
		i++;
	}
	if (ptr1 == NULL || ptr1->next == NULL)
		printf("-> [NULL] %d\n", ptr1->n);
	return (i);
}
