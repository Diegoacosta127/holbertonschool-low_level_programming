#include "main.h"
/**
  * _strcmp - compares 2 strings
  * @s1: a string
  * @s2: another string
  * Return: the difference of characters
  */
int _strcmp(char *s1, char *s2)
{
	int i, j, diff;

	i = 0;
	j = 0;

	while (*(s1 + i) != '\0' && *(s2 + j) != '\0' && *(s1 + i) == *(s2 + j))
	{
		i++;
		j++;
	}
	diff = *(s1 + i) - *(s2 - j);
	return (diff);
}
