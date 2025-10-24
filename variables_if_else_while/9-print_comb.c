#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int small_numbers;

	for (small_numbers = 48; small_numbers <= 57; small_numbers++)
	{
		putchar(small_numbers);
		if (small_numbers != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
