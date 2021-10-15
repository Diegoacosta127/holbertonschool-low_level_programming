#include "main.h"
/**
  * cap_string - capitalizes all words of a string
  * @input: the string
  * Return: pointer to input
  */
char *cap_string(char *input)
{
	int i;

	i = 0;
	if (*input > 96 && *input < 123)
	{
		*input = *input - 32;
	}
	while (*(input + i) != '\0')
	{
		if ((*(input + i) == 32 || *(input + i) == 9 ||
					*(input + i) == 10 ||
					*(input + i) == 44 ||
					*(input + i) == 59 ||
					*(input + i) == 46 ||
					*(input + i) == 33 ||
					*(input + i) == 63 ||
					*(input + i) == 34 ||
					*(input + i) == 40 ||
					*(input + i) == 41 ||
					*(input + i) == 123 ||
					*(input + i) == 124) &&
				*(input + i + 1) > 96 &&
				*(input + i + 1) < 123)
		{
			*(input + i + 1) = *(input + i + 1) - 32;
		}
		i++;
	}
	return (input);
}
