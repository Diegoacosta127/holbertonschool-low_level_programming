#include "search_algos.h"
/**
  * linear_search - searches a value ina an array of integers
  * @array: pointer to the first element of the array to search in
  * @size: number of elements in array
  * @value: value to search for
  * Return: first index where value is located. If value isn't in array or
  * array is NULL, return -1
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return ((int)i);
	}
	return (-1);
}
