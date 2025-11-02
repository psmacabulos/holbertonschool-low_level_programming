#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: input string to search
 * @accept: string containing accepted bytes
 *
 * Return: pointer to the first matching byte in s, or NULL if none found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return (NULL);
}
