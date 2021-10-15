#include "main.h"
/**
  * leet - encodes a string into 1337 lexicon
  * @elite: string to be encoded
  * Return: the string encoded
  */
char *leet(char *elite)
{
	int i;
	int j;
	char aeotl[];
	char AEOTL[];
	char numbers[];

	i = 0;
	aeotl = "aeotl";
	AEOTL = "AEOTL";
	numbers = "43071";

	while (*(elite + i) != '\0')
	{
		for (j = 0; aeotl[j] != '\0'; j++)
		{
			if (*(elite + i) == aeotl[j] ||
					*(elite + i) == aeotl[j])
			{
				*(elite + i) = numbers[j];
			}
		}
		i++;
	}
}
