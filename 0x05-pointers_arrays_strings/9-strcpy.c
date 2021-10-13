#include "main.h"
/**
  * _strcpy - copies a pointed string to a pointed buffer
  * @src: string pointed
  * @dest: buffer pointed
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + 1) != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (*dest);
}
