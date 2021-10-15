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
	char aeotl[] = "aeotl";
	char AEOTL[] = "AEOTL";
	char numbers[] = "43071";

	i = 0;

	while (*(elite + i) != '\0')
	{
		for (j = 0; aeotl[j] != '\0'; j++)
		{
			if (*(elite + i) == aeotl[j] ||
			  *(elite + i) == AEOTL[j])
			{
				*(elite + i) = numbers[j];
			}
		}
		i++;
	}
	return (elite);
}
