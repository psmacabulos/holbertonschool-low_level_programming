#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all the argument
 * @n: number of integers to be added
 * Return: sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{

	unsigned int i = 0, sum = 0;
	va_list args; /* initializes the list arguments */

	va_start(args, n); /* start reading after n */

	if (n == 0)
		return (0);

	while (i < n)
	{
		sum += va_arg(args, int);
		i++;
	}
	return (sum);
}
