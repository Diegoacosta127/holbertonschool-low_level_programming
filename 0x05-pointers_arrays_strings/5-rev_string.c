#include "main.h"
/**
  * rev_string - reverses a string
  * @s: string to be reversed
  * Return: void
  */
void rev_string(char *s)
{
	int i;
	int j;
	i = 0;
	j = 0;
	
	while (*(s + i) != '\0')
	{
		i++;
	}
	i -= 1;
	char aux[i];

	while (i >= 0 && *s != '\0')
	{
		aux[j] = _putchar(*(s + i));
		s[j] = aux[j];
		i--;
		j++;
	}
}
