#include "main.h"
/**
 ** *_strpbrk - A functon to locate the first occurence
 ** of string in a given bytes
 ** @s: String being passed to the function
 ** @accept: The string being located
 ** Return: Something
 **/
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			return (s);
		}
		s++;
	}
	return ('\0');
}
