#include <stdlib.h>
#include "dog.h"
#include<string.h>

/**
 * _strcpy - copies string from src to dest
 * @dest: destination of string
 * @src: source of string
 */

void _strcpy(char *dest, char *src)
{
	if (!dest || !src)
		return;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

/**
 * _strlen - counts the number of characters in a string
 * @s: string to be counted
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s && s[len] != '\0')
		len++;
return (len);
}

/**
 * new_dog - creates a new dog and stores copies of name and owner
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog_t, or NULL if allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *n_copy, *o_copy;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	n_copy = malloc(_strlen(name) + 1);
	if (n_copy == NULL)
	{
		free(d);
		return (NULL);
	}
	_strcpy(n_copy, name);

	o_copy = malloc(_strlen(owner) + 1);
	if (o_copy == NULL)
	{
		free(n_copy);
		free(d);
		return (NULL);
	}
	_strcpy(o_copy, owner);

	d->name = n_copy;
	d->age = age;
	d->owner = o_copy;

	return (d);
}
