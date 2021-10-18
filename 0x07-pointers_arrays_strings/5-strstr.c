#include "main.h"
/**
  * _strstr - locates a substring
  * @haystack: string
  * @needle: substring
  * Return: pointer to the beggining of located substring, otherwise NULL
  */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	j = 0;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*(haystack + i))
	{
		while (*(needle + j) && *(haystack + i) == *needle)
		{
			if (*(haystack + i + j) == *(needle + j))
			{
				j++;
			}
			else
			{
				break;
			}
		}
		if (*(needle + j))
		{
			i++;
			j = 0;
		}
		else
		{
			return (haystack + i);
		}
	}
	return (0);
}
