#include "main.h"
/**
  * main - A program that prints _putchar, followed by a new line.
  * Return: always 0
  */
int main(void)
{
	char putchar[8] = "_putchar";
	int a = 0;

	while (a < 8)
	{
		_putchar(putchar[a]);
		a++;
	}
	_putchar('\n');
	return (0);
}
