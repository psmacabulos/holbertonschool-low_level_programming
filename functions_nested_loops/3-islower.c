#include "main.h"
/**
 * _islower - check the code
 *
 * @c: the digit to check if lowercase
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
