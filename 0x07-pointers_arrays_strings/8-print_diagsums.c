#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - sum the two diagonals of a square matrix of integers
  * @a: pointer to integer
  * @size: size of the matrix
  * Return: void
  */
void print_diagsums(int *a, int size)
{
	int x, y, cont1, cont2;

	cont1 = 0;
	cont2 = 0;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			if (x == y)
			{
				cont1 = cont1 + a[(x * size) + y];
			}
			if (y == size - x)
			{
				cont2 = cont2 + a[(x * size) + y];
			}
		}
	}
	printf("%d, %d\n", cont1, cont2);
}
