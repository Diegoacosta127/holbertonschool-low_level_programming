#include "main.h"
/**
  * clear_bit - sets the value of a bit to 0 at a given index
  * @n: Pointer to the number to be changed
  * @index: Index of the bit to be setted
  * Return: 1 if it works, otherwise -1
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int number = *n;

	if (index > sizeof(8) * 8)
		return (-1);
	number &= ~(1 << index);
	*n = number;
	return (1);
}
