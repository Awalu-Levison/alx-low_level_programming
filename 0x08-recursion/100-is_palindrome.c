#include "main.h"
/**
 * recursiv_strlen - Find string length
 * @s: String given by user
 * Return: Length of string
 */
int recursiv_strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + recursiv_strlen(s + 1));
}
/**
 * _str_compare - A function that Compare strings
 * @s: String given by user
 * @first_char: First character of string
 * @last_char: Last character of string
 * Return: Int value
 */
int _str_compare(char *s, int first_char, int last_char)
{
	if (*(s + first_char) == (*(s + last_char)))
	{
		if (first_char == last_char || first_char == last_char + 1)
			return (1);
		return (0 + _str_compare(s, first_char + 1, last_char - 1));
	}
	return (0);
}
/**
 * is_palindrome - Checking whether string is parlindrome
 * @s: String given by user
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_str_compare(s, 0, recursiv_strlen(s) - 1));
}
