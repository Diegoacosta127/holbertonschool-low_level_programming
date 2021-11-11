#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
  * add_node - adds a new node at the beggining of a list
  * @head: pointer to pointer
  * @str: string to duplicate
  * Return: a new list
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
