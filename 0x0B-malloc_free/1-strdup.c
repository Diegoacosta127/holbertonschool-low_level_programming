#include <string.h>
#include "main.h"
#include <stdlib.h>
/**
  * _strdup - returns pointer to newly allocated space in memo
  * @str: string to be copied
  * Return: pointer to memo. alloc., NULL if str = NULL or if insufficiente mem
  */
char *_strdup(char *str)
{
	int i;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	p = malloc((sizeof(char) * strlen(str)) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	if (*str == '\0')
	{
		*p = '\0';
		return (p);
	}
	else
	{
		while (*(str + i) != '\0')
		{
			*(p + i) = *(str + i);
			i++;
		}
	}
	return (p);
}
