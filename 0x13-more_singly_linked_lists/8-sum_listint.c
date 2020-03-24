#include "lists.h"

/**
 * sum_listint - function to add all elemets from list
 * @head: pointer to pointer of listint_t struct type
 * Return: Always Successful
 */

int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum;

	sum = 0;
	if (head == NULL)
	{
		return (sum);
	}

	node = head;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
