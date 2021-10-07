#include "main.h"
/**
  * print_line - drwas a straight line eith length "n", followed by a new line
  * @n: input for length of the line
  * Return: void
  */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
