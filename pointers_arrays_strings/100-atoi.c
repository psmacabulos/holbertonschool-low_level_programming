#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: input string
 *
 * Return: the integer value, or 0 if no digits found
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int started = 0;
	char *p = s;

	while (*p != '\0')
	{
		if (!started && (*p == '-' || *p == '+'))
		{
			if (*p == '-')
				sign *= -1;
		}
		else if (*p >= '0' && *p <= '9')
		{
			int digit = *p - '0';

			started = 1;

			result = result * 10 + digit;
		}
		else if (started)
			break;
		p++;
	}
	return (result * sign);
}
