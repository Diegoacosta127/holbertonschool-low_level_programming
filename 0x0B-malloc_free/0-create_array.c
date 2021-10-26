#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * create_array - creates an array of chars and initializes it
  * @size: amount of characters
  * @c: characters to fulfill the array
  * Return: pointer to the array, NULL if it fails or if size is 0
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc(sizeof(c) * size);
	i = 0;

	if (size <= 0)
	{
		return (NULL);
	}
	else
	{
		while (i < size)
		{
			*(p + i) = c;
			i++;
		}
	}
	return (p);
}
