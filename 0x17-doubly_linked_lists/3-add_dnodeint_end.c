#include "lists.h"
/**
  * add_dnodeint_end - adds a new node at the end of a dlistint_t list
  * @head: pointer to pointer of dlistint_t
  * @n: datum for the new node
  * Return: pointer to dlistint_t
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *aux = *head;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (!(*head))
	{
		*head = new;
		return (*head);
	}
	while (aux->next)
	{
		aux = aux->next;
	}
	new->prev = aux;
	aux->next = new;
	aux = new;
	return (*head);
}
