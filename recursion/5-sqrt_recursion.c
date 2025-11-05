#include "main.h"
/**
 * _guess_root - guess the square or root by incrementing the number one by one
 * @n: number to be computed
 * @i: number to be compared to be the root of n
 * Return: square root of n
 */



int _guess_root(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_guess_root(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be computed
 * Return: square root of n
 */


int _sqrt_recursion(int n)
{
	/* Create a base case */
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	return (_guess_root(n, 1));
}
