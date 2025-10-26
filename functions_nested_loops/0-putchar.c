#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0.(Success)
 */
int main(void)
{
	int index;
	char words[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	for (index = 0; index < 8; index++)
	{
		_putchar(words[index]);
	}
	_putchar('\n');
	return (0);
}
