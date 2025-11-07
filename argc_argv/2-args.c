#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it including the first
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	(void) argc;

	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	printf("\n");

	return (0);
}
