#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: dlistint_t const
 * @index: index
 * Return: 0
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;
	dlistint_t *tmp = head;

	while (tmp)
	{
		if (count == index)
			return (tmp);
		count++;
		tmp = tmp->next;
	}
	return (NULL);
}
