#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
  * _calloc - allocates memory for an array
  * @nmemb: number of elements to be allocated
  * @size: size of each element to be allocated
  * Return: generic pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	memset(p, 0, nmemb * size);
	return (p);
}
