#include "main.h"
/**
 * *_memset - A function to fill with constant byte
 * @s: Original memory to be used
 * @b: Constant byte to be used
 * @n: Bytes of memory area pointed by pointer s
 * Return: Character value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	while (n)
	{
		if (n > 0)
		{
			s[x] = b;
			x--;
			n--;
		}
	}
	return (s);
}
