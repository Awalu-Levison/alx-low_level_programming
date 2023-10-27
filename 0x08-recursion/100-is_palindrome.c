#include "main.h"
#include "main.h"
/**
 ** _strlen_recursion - Printing the string length
 ** @s: String to be used
 ** Return: Something
 **/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
/**
 * string_comp - Compares strings
 * @s: Original string
 * @a: Left comparison var
 * @b: Right comparison var
 * Return: Int value
 */
int string_comp(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
			return (1);
		return (0 + string_comp(s, a + 1, b - 1));
	}
	return (0);
}
/**
 * is_palindrome - Checking whether a number is a
 * palindrome or not
 * @s: The string passed to the function
 * Return: 1 if its palindrome or 0 if its not palindrome
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (string_comp(s, 0, _strlen_recursion(s + 1)));
}
