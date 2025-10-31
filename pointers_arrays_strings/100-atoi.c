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
	int digit;

	while (s[i])
	{
		if (s[i] == '-' && !started)
			sign *= -1;
		else if (s[i] == '+' && !started)
			;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			digit = s[i] - '0';
			if (sign == -1)
				digit = -digit;
			result = result * 10 + digit;
			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
				break;
		}
		else if (started)
			break;
		i++;
	}
	return (result);
}
