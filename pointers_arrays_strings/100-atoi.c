#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: input string
 *
 * Return: the integer value, or 0 if no digits found
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int started = 0;

	while (s[i] != '\0')
	{
		if (!started && (s[i] == '-' || s[i] == '+'))
		{
			if (s[i] == '-')
				sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			int digit = s[i] - '0';

			started = 1;

			result = result * 10 + digit;
		}
		else if (started)
			break;
		i++;
	}
	return (result * sign);
}
