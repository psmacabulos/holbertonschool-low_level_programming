#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the integer value, or 0 if no numbers found
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;
	int started = 0;

	/* Skip initial non-numeric characters and process signs */
	while (s[i])
	{
		if (s[i] == '-')
		{
			if (started)
				break;
			sign *= -1;
		}
		else if (s[i] == '+')
		{
			if (started)
				break;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{

			started = 1;

			result = result * 10 + (s[i] - '0');

			/* Check if next character is still a digit */
			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
				break;
		}
		else if (started)
		{
			/* Non-digit after we started reading number */
			break;
		}
		i++;
	}

	return (result * sign);
}
