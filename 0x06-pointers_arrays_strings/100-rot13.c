#include "main.h"
/**
  * rot13 - encodes a string using rot13
  * @s: string to be encoded
  * Return: string encoded
 0 */
char *rot13(char *s)
{
	/*
	int i, j;
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnoprstuvwxyz";

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (*(s + i) == alpha[j])
			{
				*(s + i) = rot[j];
			}
		}
	}*/
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		while ((*(s + i) > 64 && *(s + i) < 91) ||
				(*(s + i) > 96 && *(s + i) < 123))
		{
			if ((*(s + i) > 78 && *(s + i) < 91) ||
					(*(s + i) > 109 && *(s + i) < 123))
			{
				*(s + i) = *(s + i) - 13;
				break;
			}
			else
			{
				*(s + i) = *(s + i) + 13;
				break;
			}
		}
		i++;
	}

	return (s);
}
