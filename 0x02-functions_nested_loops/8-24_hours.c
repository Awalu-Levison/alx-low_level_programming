#include "main.h"
/**
 * jack_bauer - Printing day or long time zones
 * Return: 0 On success
 */
void jack_bauer(void)
{
	int dayHours;
	int dayMinutes;

	for (dayHours = 0; dayHours < 24; dayHours++)
	{
		for (dayMinutes = 0; dayMinutes < 60; dayMinutes++)
		{
			_putchar((dayHours / 10) + '0');
			_putchar((dayHours % 10) + '0'0);
			_putchar(':');
			_Putchar((dayMinutes / 10) + '0');
			_putchar((dayMinutes % 10) + '0');
			_putchar('\n');
		}
	}
}
