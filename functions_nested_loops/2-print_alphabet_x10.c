#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int character;
	int index;

	for (index = 1; index <= 10; index++)
	{
	for (character = 97; character <= 122; character++)
	{
		_putchar(character);
	}
	_putchar('\n');
	}
}
