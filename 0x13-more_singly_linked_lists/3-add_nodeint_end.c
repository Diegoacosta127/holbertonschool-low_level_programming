#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - adds a new node at the end of a listint_t list
  * @head: pointer to listint_t
  * @n: integer to be added in the node
  * Return: pointer to listint_t, NULL if fails
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *otr;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (!(*head))
	{
		*head = ptr;
		return (ptr);
	}
	otr = *head;
	while (otr->next != NULL)
		otr = otr->next;
	otr->next = ptr;
	return (ptr);
}
