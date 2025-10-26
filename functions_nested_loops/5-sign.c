#include "main.h"
/**
 * print_sign - checks if n is more than 0 or not
 *
 * @n :number to be check what is the sign
 *
 * Return: Always 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
