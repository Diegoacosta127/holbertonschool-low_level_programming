#include "main.h"
/**
  * _isdigit - checks if the input is a digit
  * @c: input to be checked
  * Return: 1 if it's digit, otherwise 0
  */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
