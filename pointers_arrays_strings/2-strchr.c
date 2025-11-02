#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: char to be located
 * Return: pointer to the first occurence or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
