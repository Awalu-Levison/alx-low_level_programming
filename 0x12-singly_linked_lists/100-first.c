#include <stdio.h>
/**
 * first_func - Appliy constructor attribute to first_func
 * to get executed before the main function
 * Return: Nothing
 */
void first_func(void) __attribute__ ((constructor));
/**
 * first_func - Implements first_funci
 */
void first_func(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
