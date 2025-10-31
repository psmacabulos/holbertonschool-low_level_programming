#include <stdio.h>

/**
 * print_array - prints the "n" number of elements in an array
 *
 * @a: array
 *
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d,  ", a[i]);
	}
	printf("\n");
}
