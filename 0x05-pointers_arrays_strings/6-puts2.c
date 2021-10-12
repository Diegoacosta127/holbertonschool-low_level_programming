#include "main.h"
/**
  * puts2 - prints every other character of a string
  * @str: string to be half-printed
  * Return: void
  */
int _strlen(char *s);
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
	}
	_putchar(10);
}
