#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * alloc_grid - pointer to 2 dimensional array of integers
  * @width: width of the matrix
  * @height: height of the matrix
  * Return: NULL if w or h = 0 or fails
  */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			for (j = width; j >= 0; j--)
			{
				free(p[i]);
			}
			free(p);
			return (NULL);
		}
	}
	return (p);
}
