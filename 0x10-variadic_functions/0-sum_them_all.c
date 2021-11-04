#include "variadic_functions.h"
#include <stdarg.h>
/**
  * sum_them_all - sums all its parameters
  * @n: parameter
  * Return: 0 if n == 0, otherwise the sum of all parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list list;

	va_start(list, n);
	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(list, unsigned int);
	}
	va_end(list);
	return (sum);
}
