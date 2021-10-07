include "main.h"
/**
  * _isupper - checks if a character is uppercase
  * @c: char to be checked
  * Return: 1 if is uppercase, otherwise 0
  */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
