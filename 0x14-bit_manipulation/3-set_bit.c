#include "main.h"
/**
  * set_bit - sets a bit to 1 at a given index
  * @n: Pointer to the number to be changed
  * @index: Index of the bit that it's needed to set
  * Return: 1 if it works, otherwise -1.
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (8 * sizeof(*n)) - 1)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
