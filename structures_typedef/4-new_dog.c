#include "dog.h"
#include "1-strdup.c"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: string of char
 * @age: float
 * @owner: string of char
 * Return: a pointer to the struct dog or NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d = NULL;

	new_d = malloc(sizeof(dog_t));
	if (new_d != NULL)
	{
		new_d->name = _strdup(name);
		if (new_d->name == NULL)
		{
			free(new_d);
			return (NULL);
		}
		new_d->owner = _strdup(owner);
		if (new_d->owner == NULL)
		{
			free(new_d->name);
			free(new_d);
			return (NULL);
		}
		new_d->age = age;
	}
	return (new_d);
}
