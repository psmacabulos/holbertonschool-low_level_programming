#include "main.h"

/**
 * _memset - fills a memory with a constant
 * @s: memory area to be filled
 * @b: constant byte
 * @n: bytes of memory
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
