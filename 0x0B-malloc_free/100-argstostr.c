#include "main.h"
/**
 * *argstostr - A function that concatenates all program arguments
 * @ac: Argument count
 * @av: Argument vector
 * Return: Pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int i, n, k = 0, len = 0;
	char *mystr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			len++;
	}
	len += ac;

	mystr = malloc(sizeof(char) * (len + 1));
	if (mystr == NULL)
	{
		free(mystr);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			mystr[k] = av[i][n];
			k++;
		}
		if (mystr[k] == '\0')
		{
			mystr[k++] = '\n';
		}
	}
	return (mystr);
}
