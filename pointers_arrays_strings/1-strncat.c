#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: destination string to append to
 * @src: source string to append from
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	/* Find the end of dest */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Append up to n bytes from src */
	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	/* Null-terminate the result */
	dest[dest_len + i] = '\0';

	return (dest);
}
