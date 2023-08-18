#include "main.h"
/**
 * *leet - Encoding strings into number
 * @n: Pointerto string variable
 * Return: (A character variable)
 */
char *leet(char *n)
{
	int x, y;
	char first[] = "aAeEoOtTlL";
	char second[] = "4433007711"

		for (x = 0; n[x] != '\0'; x++)
		{
			for (y = 0; first[y] != '\0'; y++)
			{
				if (n[x] == first[y])
				{
					n[x] = second[y];
				}
			}
		}
	return (n);
}
