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
	int a, diff;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min));
	if (!p)
		return (NULL);
	diff = max - min;
	for (a = 0; a < diff; a++)
	{
		*(p + a) = min + a;
	}
	return (p);
}
