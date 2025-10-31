#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: input string
 *
 * Return: the integer value, or 0 if no digits found
 */
int _atoi(char *s)
{
	char *p = s;
	int sign = 1;
	int result = 0;
	int started = 0;

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

			/* Overflow check before multiplying */
			if (sign == 1 && result > (2147483647 - digit) / 10)
				return 2147483647;
			if (sign == -1 && result > (2147483648 - digit) / 10)
				return -2147483648;

			result = result * 10 + digit;
		}
		else if (started)
			break;
		p++;
	}

	/* Final overflow-safe return */
	if (sign == -1 && result == 2147483648)
		return -2147483648;

	return result * sign;
}
