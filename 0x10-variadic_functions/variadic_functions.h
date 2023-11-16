#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

int _putchar(char c);
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
