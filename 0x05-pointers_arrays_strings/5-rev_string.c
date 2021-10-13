#include "main.h"
/**
  * rev_string - reverses a string
  * @s: string to be reversed
  * Return: void
  */
void rev_string(char *s)
{
	int length = 0;
	int aux, j;

	while (*(s + length) != '\0')
	{
		length++;
	}
	for (j = 0; j < (length / 2); j++)
	{
		aux = s[j];
		s[j] = s[length - 1 - j];
		s[length - 1 - j] = aux
	}
}
