#include "main.h"
/**
  * _strspn - gets the length of a prefix substring
  * @s: string to be analized
  * @accept: characters to be searched in s
  * Return: length of characters found
  */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int len;

	len = 0;

	for (i = 0; *(s + i) != 32; i++)
	{
		for (j = 0; *(accept + j) != 0; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				len++;
			}
		}
	}
	return (len);
}
