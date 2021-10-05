#include <ctype.h>
#include "main.h"
/**
  * _islower - Checks if a character is lower
  * Return: 1 if c is lowercase, otherwise 0.
  */
int _islower(int c)
{
	if (islower (c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
