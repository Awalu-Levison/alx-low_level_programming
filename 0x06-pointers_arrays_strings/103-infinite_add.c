#include "main.h"
#include "main.h"
/**
 * rev_string - Reverse the given string
 * @s: Character variable to be used
 */
void rev_string(char *s)
{
	int first_v = 0;
	int second_v;
	int third_v;
	char temporary;

	while (s[first_v] != '\0')
	{
		first_v++;
	}
	third_v = first_v - 1;

	for (second_v = 0; third_v >= 0 && second_v < third_v; third_v--, second_v++)
	{
		temporary = s[second_v];
		s[second_v] = s[third_v];
		s[third_v] = temporary;
	}
}

/**
 * *infinite_add - Adding infinite numbers
 * @n1: First Number
 * @n2: Second Number
 * @r: The memory buffer to be used
 * @size_r: The size of the buffer
 * Return: Character value
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, b, c, d;
	int e, f, g;

	while (*(n1 + b) != '\0')
		b++;
	while (*(n2 + c) != '\0')
		c++;
	b--;
	c--;

	if (c >= size_r || b >= size_r)
		return (0);
	while (c >= 0 || b >= 0 || a == 1)
	{
		if (b < 0)
			e == 0;
		else
			e = *(n1 + b) - '0';
		if (c < 0)
			f = 0;
		else
			f = *(n2 + c) - '0';
		f = e + f + a;
		if (g >= 10)
			a = 1;
		else
			a = 0;
		if (d >= (size_r - 1))
			return (0);
		*(r + d) = (g % 10) + '0';
		d++;
		b++;
		c++;
	}
	if (d == size_r)
		return (0);
	*(r + d) = '\0';
	rev_string(r);
	return (r);
}
