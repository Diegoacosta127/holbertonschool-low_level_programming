#include "main.h"
/**
  * string_toupper - changes all lowercase letters to uppercase
  * @input: string to transform
  * Return: the string with all uppercase letters
  */
char *string_toupper(char *input)
{
	int i;

	i = 0;
	while (*(input + i) != '\0')
	{
		if (*(input + i) > 96 && *(input + i) < 123)
		{
			*(input + i) = *(input + i) - 32;
		}
		i++;
	}
	return (input);
}
