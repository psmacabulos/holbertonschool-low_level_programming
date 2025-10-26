#include "main.h"
/**
 * print_alphabet - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int character;

	for (character = 97; character <= 122; character++)
	{
		_putchar(character);
	}
	_putchar('\n');
}
