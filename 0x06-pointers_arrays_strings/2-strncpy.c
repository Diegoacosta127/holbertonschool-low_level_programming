#include "main.h"
/**
  * _strncpy - copies a sytring just like strncpy
  * @src: string to be concatenated at the endo of dest
  * @dest: final string
  * @n: bytes to be used
  * Return: pointer to dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
