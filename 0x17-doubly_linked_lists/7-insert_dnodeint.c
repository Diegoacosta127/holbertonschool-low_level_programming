#include "lists.h"
/**
  * insert_dnodeint_at_index - inserts a new node at a given position
  * @h: pointer to pointer of dlistint_t
  * @idx: index of the list where the new node should be added
  * @n: datum of the new node
  * Return: pointer to dlistint_t
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = *h, *aux = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (!h || !aux)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	aux->n = n;
	while (new && i < idx)
	{
		if (i + 1 == idx)
		{
			aux->next = new->next;
			if (new->next)
				new->next->prev = aux;
			new->next = aux;
			aux->prev = new;
			return (aux);
		}
		new = new->next;
		i++;
	}
	return (NULL);
}
