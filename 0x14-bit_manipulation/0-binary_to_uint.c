#include "main.h"
/**
  * _strlen - length of a string
  * @s: pointer to char
  * Return: length of a string
  */
unsigned int _strlen(const char *s)
{
	unsigned int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
/**
  * binary_to_uint - converts a binary to an unsigned int
  * @b: pointer to string of 0 and 1 chars
  * Return: the converted number, or 0 if some char isn't 0 or 1, or b is NULL
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, i, j, pow, sum;
	
	i = 0;
	if (*(b + i) == '\0')
		return (0);
	len = _strlen(b);
	sum = 0;
	while (*(b + i) != '\0')
	{
		if (*(b + i) != '1' && *(b + i) != '0')
			return (0);
		if (*(b + i) == '1')
		{
			pow = 1;
			for (j = 0; j < len; j++)
			{
				pow = pow * 2;
			}
			sum = sum + pow;
		}
		i++;
		len--;
	}
	return (sum / 2);
}
