#include "main.h"
/**
  * print_last_digit - prints last digit
  * @num: number to be checked
  * Return: last digit
  */
int print_last_digit(int num)
{
	int a;

	if (num < 0)
		num = -num;

	a = num % 10;

	if (a < 0)
		a = -a;

	_putchar(a + 48);

	return (a);
}
