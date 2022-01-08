#include "lists.h"
/**
  * add_dnodeint - adds a new node at the beggining of a dlistint_t list
  * @head: pointer to pointer of dlistint
  * @n: datum for new node
  * Return: pointer to dlistint_t
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (!(*head))
	{
		*head = new;
		return (*head);
	}
	new->next = *head;
	(*head)->prev = new;
	*head = new;
	return (*head);
}
