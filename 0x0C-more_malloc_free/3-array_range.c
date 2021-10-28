#include "main.h"
#include <stdlib.h>
/**
  * array_range - creates an array of integers
  * @min: minimum value
  * @max: maximum value
  * Return: pointer to integer, NULL if min > max or malloc fails
  */
int *array_range(int min, int max)
{
	int a;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc(max - min);
	if (!p)
		return (NULL);
	for (a = 0; a < (max - min); a++)
	{
		*(p + a) = min;
		min++;
	}
	return (p);
}
