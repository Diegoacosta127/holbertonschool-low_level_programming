#include "main.h"
/**
  * print_last_digit - prints last digit
  * @num: number to be checked
  * Return: last digit
  */
int print_last_digit(int num)
{
	if (num >= -9 && num <= 9)
	{
		return (num);
	}
	else
	{
		return (num % 10);
	}
}
