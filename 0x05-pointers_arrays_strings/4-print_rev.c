#include "main.h"
/**
  * print_rev - prints a string in reverse, followed by a new line
  * @s: string to be printed
  * Return: void
  */
void print_rev(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	while (i > 0)
	{
		_putchar(*s);
		s--;
		i--;
	}
	_putchar(10);
}
