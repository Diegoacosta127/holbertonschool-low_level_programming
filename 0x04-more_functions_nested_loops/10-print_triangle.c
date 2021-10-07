#include "main.h"
/**
  * print_triangle - prints a triangle made of '#'
  * @size: size of triangle
  * Return: void
  */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1, j < size; j++)
			{
				_putchar(32);
			}
			for (j = 1; j < i; j++)
			{
				_putchar(35);
			}
		}
		_putchar(10);
	}
	else
	{
		_putchar(10);
	}
}
