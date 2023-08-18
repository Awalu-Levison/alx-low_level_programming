#include "main.h"

/**
 * rev_string - Experience the art of
 * reversing array
 * @n: integer parameter to be checked upon
 * Return: (0 upon successful execution)
 */

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char m;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++, i--)
	{
		m = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = m;
	}
}

/**
 * infinite_add - Adding infinite numbers in C
 * @n1: 1st number to add
 * @n2: 2nd number to add
 * @r: Buffert memory to use
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, b = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + b) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	b--;
	j--;
	if (j >= size_r || b >= size_r)
		return (0);
	while (j >= 0 || b >= 0 || a == 1)
	{
		if (b < 0)
			val1 = 0;
		else
			val1 = *(n1 + b) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		temp_tot = val1 + val2 + a;
		if (temp_tot >= 10)
			a = 1;
		else
			a = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		j--;
		b--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
