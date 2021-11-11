#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
  * print_list - prints all elements of a list of 'list_t' type
  * @h: pointer to list
  * Return: number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
