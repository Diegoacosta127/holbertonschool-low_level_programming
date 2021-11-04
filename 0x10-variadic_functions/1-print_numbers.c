#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
  * print_numbers - prints numbers with a separator, followed by a new line
  * @separator: string to be printed between numbers
  * @n: number of integers passed to the function
  * Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, unsigned int));
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
