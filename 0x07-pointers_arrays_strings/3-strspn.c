#include "main.h"
/**
 * _strspn - Generating the prefix of a string
 * @s: Number of bytes to be used
 * @accept: The source of bytes to be used
 * Return: (The prefix of a string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int y = 0;

	int d;

	while (*s)
	{
		for (d = 0; accept[d]; d++)
		{
			if (*s == accept[d])
			{
				y++;
				break;
			}
			else if (accept[d + 1] == '\0')
				return (y);
		}
		s++;
	}
	return (y);
}
