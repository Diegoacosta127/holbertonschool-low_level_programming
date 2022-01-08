#include "lists.h"
/**
  * free_dlistint - frees a dlistint_t list
  * @head: pointer to dlistint_t list
  * Return: void
  */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
