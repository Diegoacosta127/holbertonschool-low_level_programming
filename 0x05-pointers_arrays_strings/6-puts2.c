#include "main.h"
/**
  * puts2 - prints every other character of a string
  * @str: string to be half-printed
  * Return: void
  */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(*str); i++)
	{
		if (i % 2 == 0)
			_putchar(*(s + i));
	}
	_putchar(10);
}
