#include "main.h"
/**
  * rev_string - reverses a string
  * @s: string to be reversed
  * Return: void
  */
void rev_string(char *s)
{
	int length, i, j = 0;
	int aux;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	length = i;
	for (j = 0; j < (length / 2); j++)
	{
		aux = s[j];
		s[j] = s[length - 1 - j];
		s[length - 1 - j] = aux;
	}
}
