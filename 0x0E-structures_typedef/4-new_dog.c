#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * @str: string to copy
 * Return: *ptr to the duplicate string or NULL if it failed
 */
char *_strdup(char *str)
{
	unsigned int pos, len;
	char *dup;

	if (!str)
		return (NULL);
	for (len = 0; str[len] != 0;)
		len++;
	dup = (char *)malloc((sizeof(char) * len + 1));
	if (dup == NULL)
		return (NULL);
	for (pos = 0; pos <= len; pos++)
	{
		dup[pos] = str[pos];
	}
	return (dup);
}
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
	d->name = _strdup(name);
	if (!(d->name))
	{
		free(d);
		return (NULL);
	}
	d->owner = _strdup(owner);
	if (!(d->owner))
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->age = age;
	return (d);
}
