#include "lists.h"
/**
  * sum_listint - sums all the data of a 'listint_t' linked list
  * @head: pointer to listint_t linked list
  * Return: the sum of all data
  */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
