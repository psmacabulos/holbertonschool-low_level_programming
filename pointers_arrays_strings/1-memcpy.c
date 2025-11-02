#include "main.h"

/**
 * _memcpy -copies memory area
 * @dest: destination of the memory area
 * @src: source of data
 * @n : n bytes to be copied
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (0);
}
