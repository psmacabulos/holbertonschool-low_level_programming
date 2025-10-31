#include "main.h"

/**
 * _strcpy - function that copies the string pointed by src
 * @src :  source of the string
 * @dest : destination buffer
 * Return: *dest pointer which have already copied the contents of src
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
