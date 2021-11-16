#include "lists.h"
#include <stdlib.h>
/**
  * pop_listint - deletes the first node of a 'listint_t' linked list
  * @head: pointer to pointer
  * Return: 0 if the linked list is empty, otherwise head node's data
  */
int pop_listint(listint_t **head)
{
	int aux;
	listint_t *node;

	if (*head != NULL)
	{
		aux = (*head)->n;
		node = *head;
		*head = (*head)->next;
		free(node);
		return (aux);
	}
	else
		return (0);
}
