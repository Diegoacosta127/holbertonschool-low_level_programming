#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
  * _strdup - returns pointer to newly allocated space in memo
  * @str: string to be copied
  * Return: pointer to memo. alloc., NULL if str = NULL or if insufficiente mem
  */
char *_strdup(char *str)
{
	int i;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	p = malloc((sizeof(char) * strlen(str)) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	if (*str == '\0')
	{
		*p = '\0';
		return (p);
	}
	else
	{
		while (*(str + i) != '\0')
		{
			*(p + i) = *(str + i);
			i++;
		}
	}
	return (p);
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
	d->name = strdup(name);
	if (!(d->name))
	{
		free(d);
		return (NULL);
	}
	d->owner = strdup(owner);
	if (!(d->owner))
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->age = age;
	return (d);
}
