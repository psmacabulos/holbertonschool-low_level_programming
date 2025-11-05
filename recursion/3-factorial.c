#include "main.h"

/**
 * factorial - computes the factorial of n
 * @n: integer given
 * Return: factorial of n
 */
int factorial(int n)
{
	/* Create base case */
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
