#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * add_node_end - adds a node at the end of the list
  * @head: pointer to pointer
  * @str: string to be duplicated
  * Return: pointer to list
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *otr;

	ptr = malloc(sizeof(list_t));
	otr = malloc(sizeof(list_t));
	if (!ptr || !otr)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
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
