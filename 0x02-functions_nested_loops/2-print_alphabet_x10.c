#include "main.h"
/**
  * print_alphabet_x10 - prints the alphabet 10 times
  * Return: void
  */
void print_alphabet_x10(void)
{
	int looper = 0;
	int ch = 0;

	while (looper < 10)
	{
		while (ch < 26)
		{
			_putchar(ch+97);
			ch++;
		}
		ch = 0;
		_putchar('\n');
		looper++;
	}
}
