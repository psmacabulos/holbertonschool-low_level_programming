#include "main.h"
/**
 * _abs - computes the absolute number of an integer
 * @x : - the integer to be converted to its absolute value
 * Return: Always 0.
 */
int _abs(int x)
{
	if (x > 0)
		return (x);
	else if (x < 0)
	{
		return (x * -1);
	}
	return (0);
}
