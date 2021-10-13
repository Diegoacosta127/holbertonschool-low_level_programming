#include "main.h"
/**
  * puts_half - prints half of a string, followed by a new line
  * @str: string to be half-printed
  * Return: void
  */
void puts_half(char *str)
{
	int i;
	int length;

	length = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (length % 2 != 0 && i > length / 2)
			_putchar(str[i]);
		else if (length % 2 == 0 && i >= length / 2)
			_putchar(str[i]);
	}
	_putchar(10);
}
