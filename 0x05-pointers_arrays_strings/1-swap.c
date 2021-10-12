#include "main.h"
/**
  * swap_int - swaps the vaules of 2 integers
  * @a: an integer
  * @b: another integer
  * Return: void
  */
void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
