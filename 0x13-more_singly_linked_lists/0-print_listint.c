#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
  * print_listint - prints all elements of a listint_t list
  * @h: list
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
