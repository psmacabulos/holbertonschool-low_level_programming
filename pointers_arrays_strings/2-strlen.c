#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: pointer to the string
 *
 * Return: number of characters in the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
