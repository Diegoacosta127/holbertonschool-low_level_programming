#include "main.h"
/**
  * _memcpy - copies a number of bytes from memory area src to memory area dest
  * @dest: destination pointer
  * @src: source pointer
  * @n: number of bytes to be copied
  * Return: pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
