#include "search_algos.h"
/**
 * jump_search - Searching for an item in the given array of integers
 * using jump search algorithm
 * @array: The given list
 * @size: Size of the list
 * @value: The actual value being searched for
 * Description: Search for value using jump search algorithm
 * use sqrt() as jump size
 * Return: Index to the first value
 */
int jump_search(int *array, size_t size, int value)
{
	size_t idx, step, j;

	if (!array || size == 0)
		return (-1);

	step = sqrt(size);

	for (idx = j = 0; j < size && array[j] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		idx = j;
		j += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", idx, j);

	j = j < size - 1 ? j : size - 1;
	for (; idx < j && array[idx] < value; idx++)
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
	return (array[idx] == value ? (int)idx : -1);
}
