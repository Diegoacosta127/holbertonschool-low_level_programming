#include "main.h"
/**
  * binary_to_uint - converts a binary to an unsigned int
  * @b: pointer to string of 0 and 1 chars
  * Return: the converted number, or 0 if some char isn't 0 or 1, or b is NULL
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ret;
	int i;

	if (!b)
		return (0);
	for (i = 0; *(b + i) != '\0'; i++)
		if (*(b + i) != '0' && *(b + i) != '1')
			return (0);
	ret = 0;
	for (i = 0; *(b + i) != '\0'; i++)
	{
		ret *= 2;
		if (*(b + i) == '1')
			ret += 1;
	}
	return (ret);
}
