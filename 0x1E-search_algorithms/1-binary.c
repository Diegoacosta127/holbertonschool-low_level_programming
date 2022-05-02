#include "search_algos.h"
/**
  * binary_search - searches a value ina a sorted array of integers
  * @array: pointer to the first element of the array to search in
  * @size: number of elements in array
  * @value: value to search for
  * Return: first index where value is located. If value isn't in array or
  * array is NULL, return -1
  */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid, i;

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
		}
		printf("\n");
		mid = (low + high) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
