#include "main.h"
/**
  * _strncat - concatenates 2 strings, except it uses at most n bytes
  * @src: string to be concatenated at the end of dest
  * @dest: final string
  * @n: bytes to be used
  * Return: pointer to dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, length;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[length + i] = src[i];
	}
	dest[length + i] = '\0';
	return (dest);
}
