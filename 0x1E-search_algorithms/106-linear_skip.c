#include "search_algos.h"
/**
 * linear_skip - Linear search in a skip list in C programming
 * @list: Pointer to the head of the list
 * @value: The node of the list
 * Return: Index of the particular node
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node;
	skiplist_t *j;

	if (list == NULL)
		return (NULL);

	for (node = j = list; j->next != NULL && j->n < value;)
	{
		node = j;
		if (j->express != NULL)
		{
			j = j->express;
			printf("Value checked at index [%ld] = [%d]\n",
					j->index, j->n);
		}
		else
		{
			while (j->next != NULL)
				j = j->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, j->index);

	for (; node->index < j->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
