#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
  * add_nodeint - adds a node at the beginning of the listint_t list
  * @head: pointer
  * @n: integer to be added
  * Return: pointer to listint_t
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
