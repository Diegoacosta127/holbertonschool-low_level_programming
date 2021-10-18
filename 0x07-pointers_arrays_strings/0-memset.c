#include "main.h"
/**
  * _memset - fills the first n bytes of the memory area pointed by s with constant byte b
  * @s: the area pointed
  * @b: constant byte
  * @n: number of bytes
  * Return: a pointer to the memory area s
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
