#include "main.h"
/**
  * _strchr - locates a character in a string
  * @s: string to be analized
  * @c: character to be located
  * Return: ptr to first occurrence of the character, NULL if it's not found
  */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (*(s + i) != '\0' && *(s + i) != c)
	{
		i++;
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	else
	{
		return (0);
	}
}
