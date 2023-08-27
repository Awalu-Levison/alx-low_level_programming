#include "main.h"
/**
 * *_strstr - A function that locates a substring
 * @haystack: The passed string  to be used
 * @needle: The string to be found
 * Return: Something
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (*needle == needle[i])
				return (haystack);
		}
		haystack++;
	}
	return ('\0');
}

