#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  * str_concat - concatenates two strings
  * @s1: first string
  * @s2: second string
  * Return: pointer to char, NULL if fails
  */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *p;

	p = malloc((sizeof(s1) * strlen(s1)) + (sizeof(s2) * strlen(s2)) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		*(p + i) = *(s1 + i);
	}
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(p + i) = *(s2 + j);
		i++;
	}
	return (p);
}
