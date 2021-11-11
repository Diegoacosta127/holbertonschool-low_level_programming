#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
  * list_len - counts the elements of a linked list
  * @h: linked list
  * Return: number of elements in the linked list
  */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
