#include <stdio.h>
#include "main.h"

/**
 * main - program that prints its name followed by a new line.
 * @argc: argument count
 * @argv: argument vector (array of strings)
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *p = argv[0];

	(void)argc;
	while (*p)
	{
		_putchar(*p);
		p++;
	}
	_putchar('\n');
	return (0);
}
