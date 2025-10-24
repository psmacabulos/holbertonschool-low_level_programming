#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int small_letters = 97;

while (small_letters <= 122)
{
	if (small_letters == 101 || small_letters == 113)
	{
		small_letters++;
		continue;
	}
	else
	{
		putchar(small_letters);
	}
small_letters++;
}
putchar('\n');
return (0);
}
