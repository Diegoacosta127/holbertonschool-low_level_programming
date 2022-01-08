#include "lists.h"
/**
  * dlistint_len - returns the number of elements in a linked dlistint_t list
  * @h: pointer to dlistint_t
  * Return: numbert of elements
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
/**
  * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
  * @head: pointer to dlistint_t linked list
  * @index: index of the node, starting from 0
  * Return: the nth node, NULL if it doesn't exist
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux = NULL;
	unsigned int len = dlistint_len(head), idx = 0;

	if (!head || index >= len)
		return (NULL);
	aux = head;
	while (idx < index)
	{
		aux->prev = aux;
		aux = aux->next;
		idx++;
	}
	return (aux);
}
