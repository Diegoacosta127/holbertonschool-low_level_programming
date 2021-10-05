#include "main.h"
/**
  * print_alphabet - prints the alphabet in lowercase, followed by a new line
  * Return: Always 0
  */
void print_alphabet(void)
{
	int a;

	for (a = 0; a < 26; a++)
	{
		_putchar(a + 97);
	}
	_putchar('\n');
}
