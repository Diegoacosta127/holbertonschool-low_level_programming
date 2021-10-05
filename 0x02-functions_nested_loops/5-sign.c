#include "main.h"
/**
  * print_sign - Prints the sign of a number
  * @n: number to be cheked
  * Return: 1 if it's greater than 0,-1 if it's less than 0, and 0 if it's 0.
  */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else
	{
		if (n < 0)
		{
			putchar('-');
			return (-1);
		}
		else
		{
			putchar(48);
			return (0);
		}
	}
}
