#include "main.h"
/**
  * rot13 - encodes a string using rot13
  * @s: string to be encoded
  * Return: string encoded
  */
char *rot13(char *s)
{
	int i, j;
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	i = 0;
	while (*(s + i) != 0)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (*(s + i) == alpha[j])
				*(s + i) = rot[j];
		}
		i++;
	}
	return (s);
}
