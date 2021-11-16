#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - returns the nth node of a 'listint_t' linked list
  * @head: pointer to listint_t
  * @index: the index
  * Return: the nth node, NULL if it doesn't exist
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	return (head);
}
