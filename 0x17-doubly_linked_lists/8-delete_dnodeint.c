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
  * delete_dnodeint_at_index - deletes a node from a list at an index given
  * @head: pointer to pointer of dlistint_t
  * @index: node that should be deleted, starts at 0
  * Return: 1 if it works fine, otherwise -1
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head;
	unsigned int i = 0;
	size_t len = dlistint_len(*head);

	if (!head || !*head || index >= len)
		return (-1);
	while (aux)
	{
		if (i == index)
		{
			if (aux->prev)
				aux->prev->next = aux->next;
			if (aux->next)
				aux->next->prev = aux->prev;
			break;
		}
		aux = aux->next;
		i++;
	}
	if (aux == *head)
		*head = aux->next;
	free(aux);
	return (1);
}
