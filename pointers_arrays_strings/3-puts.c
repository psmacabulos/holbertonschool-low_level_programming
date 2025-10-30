#include "main.h"

/**
 * _puts - placeholder function derived from filename 3-puts.c
 *
 * @str: string to be printed
 */
void _puts(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
