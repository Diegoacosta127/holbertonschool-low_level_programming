#include "lists.h"
#include <stddef.h>
/**
  * listint_len - calculates number of elements in a linked 'listint_t' list
  * @h: list
  * Return: number of elements
  */
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
