#include "lists.h"
/**
  * print_dlistint - print all the elements of a dlistint_t list
  * @h: pointer to dlistint_t
  * Return: number of elements
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nums = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nums++;
	}
	return (nums);
}
