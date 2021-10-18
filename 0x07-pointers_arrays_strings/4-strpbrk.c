#include "main.h"
/**
  * _strpbrk - searches a string of any of a set of bytes
  * @s: string to be analized
  * @accept: bytes to be searched
  * Return: pointer to s if there's a match, otherwise NULL
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr;

	i = 0;

	while (*(s + i) != 0)
	{
		j = 0;

		while (*(accept + j) != 0)
		{
			if(*(accept + j) == *(s + i))
			{
				ptr = &s[i];
				return (ptr);
			}
			j++;
		}
		i++;
	}
	return (0);
}
