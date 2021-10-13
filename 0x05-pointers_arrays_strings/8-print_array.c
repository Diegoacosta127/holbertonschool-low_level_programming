#include "main.h"
#include <stdio.h>
/**
  * print_array - print n elements of an array of integers
  * @a: the array
  * @n: number of elements printed
  * Return: void
  */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", a[i]);
		}
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
