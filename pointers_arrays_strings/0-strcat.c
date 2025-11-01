#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string where the src is appended
 * @src: string to be appended
 * Return: combined strings
 */

char *_strcat(char *dest, char *src)
{
	int destLength = 0;
	int i = 0;

	/* Get the length of destination string */
	while (dest[destLength])
		destLength++;

	/* Append src to dest */
	while (src[i])
	{
		dest[destLength + i] = src[i];
		i++;
	}

	/* Add null terminator at the end */
	dest[destLength + i] = '\0';

	return (dest);
}
