#include "main.h"

/**
 * string_toupper - converts the string to uppercase
 * @str : string to be converted to uppercase
 * Return: string
 */
char *string_toupper(char *str)
{

	int i = 0;

		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
			i++;
		}

		return (str);
}
