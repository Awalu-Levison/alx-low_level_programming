#include "main.h"
#include <stdlib.h>
/**
 * *argstostr - A function that concatenates all arguments of a program
 * @ac: Counting the number of arguments
 * @av: Actual arguments
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	char *pointer;
	int i, n, k = 0, len = 0;

	if (ac == 0 || av == '\0')
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			len++;
	}
	len += ac;

	pointer = malloc(sizeof(char) * len + 1);
	if (pouinter == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			pointer[k] = av[i][n];
			k++;
		}
		if (pointer[k] == '\0')
		{
			pointer[k++] = '\n';
		}
	}
	return (pointer);
}
