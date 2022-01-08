#include "lists.h"
/**
  * sum_dlistint - sums the data of a dlistint_t linked list
  * @head: pointer to dlistint_t linked list
  * Return: the sum
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
