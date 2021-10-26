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
	int i, j, ls1, ls2;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ls1 = 0;
	ls2 = 0;
	while (*(s1 + ls1))
	{
		ls1++;
	}
	while (*(s2 + ls2))
	{
		ls2++;
	}
	p = malloc((sizeof(s1) * ls1) + (sizeof(s2) * ls2) - 76);
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
