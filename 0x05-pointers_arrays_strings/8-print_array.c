#include "main.h"
/**
  * print_array - print n elements of an array of integers
  * @a: the array
  * @n: number of elements printed
  * Return: void
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf(10);
}
