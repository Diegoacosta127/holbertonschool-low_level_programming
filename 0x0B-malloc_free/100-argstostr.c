#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  * argstostr - concatenates arguments
  * @ac: number of arguments
  * @av: list of arguments
  * Return: pointer to char
  */
char *argstostr(int ac, char **av)
{
	int i, j, len;
	char *p;

	len = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			len++;
		}
		len++;
	}
	p = malloc(len * sizeof(char) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; av[i]; i++)
	{
		p = strcat(p, av[i]);
		p = strcat(p, "\n");
	}
	return (p);
}
