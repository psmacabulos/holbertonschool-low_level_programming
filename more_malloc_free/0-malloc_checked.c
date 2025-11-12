#include "main.h"
#include<stdlib.h>
/**
 * malloc_checked -function that allocates memory using malloc
 * @b: number of bytes to be allocated
 * Return: returns a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	/* check if malloc fails */
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
