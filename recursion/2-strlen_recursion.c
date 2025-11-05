#include "main.h"

/**
 * _strlen_recursion - returns the length of the string
 * @s: string input
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	/* Create a base case */
	if (!*s)
		return (0);

	/* Recursive case */
	return (1 + _strlen_recursion(s + 1));

}
