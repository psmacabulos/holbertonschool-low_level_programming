#include <stdlib.h>
#include <string.h>
#include "dog.h"

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

	n_copy = malloc(strlen(name) + 1);
	if (n_copy == NULL)
	{
		free(d);
		return (NULL);
	}
	strcpy(n_copy, name);

	o_copy = malloc(strlen(owner) + 1);
	if (o_copy == NULL)
	{
		free(n_copy);
		free(d);
		return (NULL);
	}
	strcpy(o_copy, owner);

	d->name = n_copy;
	d->age = age;
	d->owner = o_copy;

	return (d);
}
