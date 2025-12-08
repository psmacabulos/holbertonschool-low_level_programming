#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: the calculated hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;
	int i = 0;

	/* Loop through each character until we reach the null terminator '\0' */
	while (str[i] != '\0')
	{
		c = str[i];  /* get the ASCII value of the character */
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
		i++;  /* move to the next character */
	}

	return (hash);
}
