#include "function_pointers.h"
/**
  * int_index - searches for an integer
  * @array: array where the search will be
  * @size: number of elements in array
  * @cmp: pointer to function used to compare values
  * Return: index of first element which cmp doesn't return 0
  * -1 if there aren't matches or size <= 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}
	return (-1);
}
