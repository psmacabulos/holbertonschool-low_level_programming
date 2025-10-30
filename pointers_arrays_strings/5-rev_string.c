#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: the string to reverse
 *
 * Description: swaps characters from ends towards the center.
 */
void rev_string(char *s)
{
	int i, j;
	char tmp;

	i = 0;
	while (s[i] != '\0')
		i++;

	/* i now holds length; set j to last valid index */
	j = i - 1;

	for (i = 0; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
