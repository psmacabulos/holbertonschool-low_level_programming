#include "main.h"

/**
 * check_prime - helper to test divisibility recursively
 * @n: number to test
 * @i: current divisor
 * Return: 1 if prime, 0 if not
 */
int check_prime(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - returns 1 if n is prime, else 0
 * @n: number to test
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}
