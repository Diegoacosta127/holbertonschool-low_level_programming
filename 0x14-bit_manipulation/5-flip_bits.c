#include "main.h"
/**
  * flip_bits - counts bits needed to flip to get one number to another
  * @n: a number
  * @m: another number
  * Return: number of bits needed to flip
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int number = 0, count = 0;

	number = n ^ m;
	while (number)
	{
		if (number & 1)
			count++;
		number >>= 1;
	}
	return (count);
}
