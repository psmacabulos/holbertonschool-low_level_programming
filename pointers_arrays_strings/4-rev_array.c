#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: array
 * @n: number of elements in the array
 * Return: 0
 */

void reverse_array(int *a, int n)
{

	int tmp, i;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
