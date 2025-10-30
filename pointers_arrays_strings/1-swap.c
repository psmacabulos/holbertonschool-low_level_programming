#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: integer pointer
 * @b: integer pointer
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
