#include "main.h"
#define ERR_MSG "Error"
/**
 * digit_checker - A function that checks
 * if the given character is digit or not
 * @s: String parameter
 * Return: Something
 */
int digit_checker(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * _strlength - A function that calculate the string length
 * @s: String given by the user
 * Return: length of the string
 */
int _strlength(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * error_print - A function that prints error
 * Return: void
 */
void error_print(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - A function that multiplies two positive base 10 numbers
 * @argc: Argument count
 * @argv: Actual arguments
 * Return: Something
 */
int main(int argc, char **argv)
{
	char *s1, *s2;
	int i, my_len, len2, len1, num1, num2, num3, remainder, *my_ptr;

	num3 = 0;
	s1 = argv[1];
	s2 = argv[2];

	if (argc != 3 || !digit_checker(s1) || !digit_checker(s2))
		error_print();
	len1 = _strlength(s1);
	len2 = _strlength(s2);
	my_len = len1 + len2 + 1;
	my_ptr = malloc(sizeof(int) * my_len);
	if (!my_ptr)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		my_ptr[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		num1 = s1[my_len] - '0';
		remainder = 0;
		for (len2 = len2 - 1; len2 >= 0; len2--)
			num2 = s2[len2] - '0';
		remainder += my_ptr[len1 + len2 + 1] + (num1 * num2);
		my_ptr[len1 + len2 + 1] = remainder % 10;
		remainder /= 10;
	}
	if (remainder > 0)
		my_ptr[len1 + len2 + 1] += remainder;
	for (i = 0; i < my_len - 1; i++)
	{
		if (my_ptr[i])
			num3 = 1;
		if (num3)
			_putchar(my_ptr[i] + '0');
	}
	if (!num3)
		_putchar('0');
	_putchar('\n');
	free(my_ptr);
	return (0);
}
