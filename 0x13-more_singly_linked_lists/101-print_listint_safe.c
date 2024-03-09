#include "lists.h"
void freemylist(list_s **head);
/**
 * freemylist - Free up memory space
 * @head: Pointer to the first node
 */
void freemylist(list_s **head)
{
	list_s *ptr1, *ptr2;

	if (head != NULL)
	{
		ptr1 = *head;
		while ((ptr1 = ptr2) != NULL)
		{
			ptr2 = ptr2->next;
			free(ptr1);
		}
		*head = NULL;
	}
}
/**
 * print_listint_safe - Safe list printing
 * @head: Pointer to the first node
 * Return: Number of nodes of the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;

	listint_t *ptr, *new, *add;

	ptr = NULL;
	while (ptr != NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			exit(98);
		new->p = (void *)head; /*Define p*/
		new->next = ptr;
		ptr = new;

		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				freemylist(&ptr);
				return (i);
			}
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
		head = head->next;
		i++;
	}
	freemylist(&ptr);
	return (i);
}
