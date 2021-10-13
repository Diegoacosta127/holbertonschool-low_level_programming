#include "main.h"
/**
  * puts2 - prints every other character of a string
  * @str: string to be half-printed
  * Return: void
  */
void puts2(char *str)
{
	int a, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	a = i;
	for (i = 0; i <= a - 1; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar(10);
}
