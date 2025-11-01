#include "main.h"

/**
 * _strcmp - a function that compares 2 strings
 * @s1: one of the string to be compared
 * @s2: the other string to be compared
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		return (*s1 - *s2);
}
