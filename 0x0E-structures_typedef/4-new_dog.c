#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
  * new_dog - creates a new dog :)
  * @name: name of the dog
  * @age: age of the puppy
  * @owner: name of its owner
  * Return: a new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	d->name = strdup(name);
	if (!d->name)
	{
		free(d);
		return (NULL);
	}
	d->owner = owner;
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->age = age;
	return (d);
}
