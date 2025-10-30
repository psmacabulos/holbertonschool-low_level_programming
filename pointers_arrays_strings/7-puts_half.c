#include "main.h"

/**
 * puts_half - prints the second half of the string
 *
 * @str: string to be halfved and printed
 */
void puts_half(char *str)
{
	int length = 0;
	int n;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		n = (length) / 2;
	else
		n = (length + 1) / 2;
	for (; n <= length - 1; n++)
		_putchar(str[n]);
	_putchar('\n');
}
