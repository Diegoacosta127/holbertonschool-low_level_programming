#include "lists.h"
#include <stdlib.h>
/**
  * insert_nodeint_at_index - inserts a node at a given position
  * @head: pointer to pointer
  * @idx: index of the list where the new node should be
  * @n: datum for the new node
  * Return: the address of new node, NULL if it fails
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux, *otr;
	unsigned int i;

	aux = malloc(sizeof(listint_t));
	if (!aux)
		return (NULL);
	aux->n = n;
	aux->next = NULL;
	if (!(*head))
	{
		*head = aux;
		return (aux);
	}
	otr = *head;
	i = 0;
	while (otr->next != NULL && i <= idx)
	{
		if (i == idx - 1)
		{
			aux->next = otr->next;
			otr->next = aux;
		}
		else
			otr = otr->next;
		i++;
	}
	return (aux);
}
