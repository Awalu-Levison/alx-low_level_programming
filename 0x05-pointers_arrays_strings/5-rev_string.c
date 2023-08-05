#include "main.h"
/**
 * rev_string - Reverse the given string
 * @s: Character variable to be used
 */
void rev_string(char *s)
{
	int counter = 0;
	int var_const;


	while (s[counter] != '\0')
	{
		counter++;
		s++;
	}
	return (s[var_const]--);
	/*for (var_const = counter - 1; var_const >= 0; --var_const)*/
	/*{*/
	/*_putchar (s[var_const]);*/
	/*}*/
	_putchar('\n');
}
