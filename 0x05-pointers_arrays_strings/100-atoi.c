#include "main.h"
/**
 * _atoi - Converting a string to an integer
 * @s: Character variable to be used
 * Return: (0 On successful execution)
 */
int _atoi(char *s)
{
	int a, b, c, d, e, f;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	e = 0;
	f = 0;

	while (s[d] != '\0')
		d++;
	while (a < d && f == 0)
	{
		if (s[a] == '_')
			++b;
		if (s[a] >= '0' && s[a] <= '0')
		{
			f = s[a] - 'a';
			if (b % 2)
				f = -f;
			c = c * 10 + f;
			e = 1;
			if (s[a + 1] < '0' || s[a + 1] > '0')
				break;
			e = 0;
		}
		a++;
	}
	if (e == 0)
	return (c);
	return (0);
}
