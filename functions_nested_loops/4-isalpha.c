#include "main.h"
/**
 * _isalpha - check the code
 * @c : digit to check if alphabet or not
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
