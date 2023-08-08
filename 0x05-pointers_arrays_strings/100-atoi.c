#include "main.h"
/**
 * _atoi - Converting a string to an integer
 * @s: Character variable to be used
 * Return: (0 On successful execution)
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int y = 0;

	/*Dealing with negatives*/
	if (s[0] == '-')
	{
		sign = -1;
		y = 1;
	}
	while (s[y] >= '0' && s[y] <= '9')
	{
		if (result > (INT_MAX - (s[Y] - '0')) / 10)
		{
			_putchar('Integer overflow detected');
			return (0);
		}
		result = result * 10 + (s[y] - '0');
		y++;
	}
	return (result * sign);
}
