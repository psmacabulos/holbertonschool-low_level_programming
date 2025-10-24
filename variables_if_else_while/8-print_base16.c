#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int small_numbers;
	int hexa;

	for (small_numbers = 48; small_numbers <= 57; small_numbers++)
	{
		putchar(small_numbers);
	}

	for (hexa = 97; hexa <= 102; hexa++)
	{
		putchar(hexa);
	}

	putchar('\n');
	return (0);
}
