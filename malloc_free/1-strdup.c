#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string (success), or NULL (failure)
 */
char *_strdup(char *str)
{
	char *ptr;
	int len = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';

	return (ptr);
}
