#include "lists.h"
#include <stdlib.h>
/**
  * free_listint - frees a listint_t list
  * @head: pointer to listint_t
  * Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
