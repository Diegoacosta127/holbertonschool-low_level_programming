#include "lists.h"
/**
  * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
  * @head: pointer to dlistint_t linked list
  * @index: index of the node, starting from 0
  * Return: the nth node, NULL if it doesn't exist
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux = head;
	unsigned int idx = 0;

	if (!head)
		return (NULL);
	if (index >= dlistint_len(head))
		return (NULL);
	while (aux)
	{
		aux = aux->next;
		if (idx == index - 1)
			return (aux);
		idx++;
	}
	return (aux);
}
