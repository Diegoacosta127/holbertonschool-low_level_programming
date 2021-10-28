#include "main.h"
#include <stdlib.h>
/**
  * string_nconcat - concatenates 2 strings
  * @s1: string destination
  * @s2: string source
  * @n: number of character to be taken from s2
  * Return: pointer to char
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, ls1, ls2;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ls1 = 0;
	ls2 = 0;
	while (*(s1 + ls1) != '\0')
	{
		ls1++;
	}
	while (*(s2 + ls2) != '\0')
	{
		ls2++;
	}
	ls2 += 1;
	if (n > ls2)
	{
		n = ls2;
	}
	p = malloc(ls1 + n + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		*(p + i) = *(s1 + i);
	}
	for (j = 0; j < n; j++)
	{
		*(p + i) = *(s2 + j);
		i++;
	}
	return (p);
}
