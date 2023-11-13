#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - A function pointer to print name of a person
 *
 * @name: The actual name to be printed
 * @f: Function pointer of void return type
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	char *actual_name;

	void (*f)(char *) = name;

	actual_name = name;
	if (name == NULL || f == NULL)
	{
		return (NULL);
	}
	else
	{
		printf("%s", actual_name);
	}
}
