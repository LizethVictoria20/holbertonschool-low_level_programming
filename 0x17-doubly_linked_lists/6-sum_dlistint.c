#include "lists.h"

/**
 * sum_dlistint - add all elements
 * @head: dlistint_t const
 * Return: 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
