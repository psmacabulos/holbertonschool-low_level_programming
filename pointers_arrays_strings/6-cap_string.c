#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	int new_word = 1;
	char sep[] = " \t\n,;.!?\"(){}";
	int j;

	while (str[i])
	{
		if (new_word && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		new_word = 0;

		for (j = 0; sep[j]; j++)
		{
			if (str[i] == sep[j])
			{
				new_word = 1;
				break;
			}
		}

		i++;
	}

	return (str);
}
