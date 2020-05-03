#include "lists.h"

/**
 * free_dlistint - free memory
 * @head: dlistint_t const
 * Return: 0
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
