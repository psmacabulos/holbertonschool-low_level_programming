#include "main.h"
#include <limits.h>

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int conv = 0;
	int digits = 0;

	while (s[i] != '\0')
	{
		if (!digits && (s[i] == '+' || s[i] == '-'))
		{
			if (s[i] == '-')
				sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			int digit = s[i] - '0';

			digits = 1;
			if (conv > (INT_MAX - digit) / 10)
			{
				return ((sign == 1) ? INT_MAX : INT_MIN);
			}

			conv = conv * 10 + digit;
		}
		else if (digits)
			break;
		i++;
	}
	return (conv * sign);
}
