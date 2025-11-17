#include "variadic_functions.h"
#include<stdlib.h>
#include<stdarg.h>
#include<stdio.h>
/**
 * print_numbers -prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	/* Declares the argument */
	va_list args;
	/* Initializes the list */
	va_start(args, n);

	if (separator == NULL)
		return;
	while (i < n)
	{
		printf("%s%d", separator, va_arg(args, int));
		       i++;
	}
	printf("\n");
}
