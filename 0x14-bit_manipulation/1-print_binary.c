#include "main.h"
/**
  * print_binary - prints the binary representation of a number
  * @n: the number
  * Return: void
  */
void print_binary(unsigned long int n)
{
	unsigned long int aux;
	int i;

	aux = n;
	i = 0;
	while (aux > 0)
	{
		i++;
		aux = aux >> 1;
	}
	i--;
	if (n == 0)
		_putchar('0');
	while (i >= 0)
	{
		if ((n >> i) & 1)
			_putchar('1');
		else
			_putchar('0');
		i--;
	}
}
