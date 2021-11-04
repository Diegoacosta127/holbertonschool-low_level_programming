#ifndef SOMETHING_H
#define SOMETHING_H
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * print_all - Prints anything
  * @format: type of argument
  * Return: void
  */
void print_all(const char * const format, ...)
{
	char *auxs, *auxc;
	int a;
	va_list list;
	int auxi;
	float auxf;

	a = 0;
	va_start(list, format);
	while (format && format[a])
	{
		switch (format[a])
		{
			case ('c'):
				auxc = va_arg(list, char *);
				printf("%s", auxc);
			break;
			case ('i'):
				auxi = va_arg(list, int);
				printf("%d", auxi);
			break;
			case ('s'):
				auxs = va_arg(list, char *);
				if (auxs == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", auxs);
			break;
			case ('f'):
				auxf = va_arg(list, double);
				printf("%f", auxf);
			break;
			default:
			break;
			}
		a++;
	}
	printf("\n");
}
#endif
