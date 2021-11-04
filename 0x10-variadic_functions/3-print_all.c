#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
/**
  * print_all - Prints anything
  * @format: type of argument
  * Return: void
  */
void print_all(const char * const format, ...)
{
	char *auxs, *separator;
	size_t a;
	va_list list;

	a = 0;
	separator = "";
	va_start(list, format);
	while (format && format[a])
	{
		switch (format[a])
		{
			case ('c'):
				printf("%s", separator);
				printf("%c", va_arg(list, int));
			break;
			case ('i'):
				printf("%s", separator);
				printf("%d", va_arg(list, int));
			break;
			case ('s'):
				auxs = va_arg(list, char *);
				if (auxs == NULL)
				{
					printf("%s", separator);
					printf("(nil)");
					break;
				}
				printf("%s", separator);
				printf("%s", auxs);
			break;
			case ('f'):
				printf("%s", separator);
				printf("%f", va_arg(list, double));
			break;
		}
		separator = ", ";
		a++;
	}
	printf("\n");
	va_end(list);
}
