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
	char *array;
	int i, n, c = 0, length = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/*Counting the arguments*/
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			length++;
	}
	length += ac;

	array = malloc(sizeof(char) * length + 1);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			array[c] == av[i][n];
				c++;
		}
		if (str[c] == '\0')
		{
			array[c] = '\n';
		}
	}
	return (str);
}
