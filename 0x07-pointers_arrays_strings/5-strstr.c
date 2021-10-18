#include "main.h"
/**
  * _strstr - locates a substring
  * @haystack: string
  * @needle: substring
  * Return: pointer to the beggining of located substring, otherwise NULL
  */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, flag;

	i = 0;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*(haystack + i) != 0)
	{
		j = 0;
		k = i;
		while (*(needle + j) != 0)
		{
			if (*(needle + j) == *(haystack + k))
			{
				flag = 1;
			}
			else
			{
				break;
			}
			j++;
			k++;
		}
		if (flag == 1)
		{
			return (haystack + i);
		}
		i++;
	}
	return (0);
}
