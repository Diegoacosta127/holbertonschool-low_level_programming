#include <ctype.h>
#include "main.h"
/**
  * _isalpha - Checks if a character is a letter
  * @c: character to be checked
  * Return: 1 if checks, 0 otherwise
  */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
