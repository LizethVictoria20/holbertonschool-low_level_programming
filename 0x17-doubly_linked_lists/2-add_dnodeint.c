#include "lists.h"

/**
 * add_dnodeint - return the number of elements
 * @head: dlistint_t const
 * @n: variable
 * Return: size_t
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (head == NULL)
		return (NULL);

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->next = NULL;
		*head = node;
		return (node);
	}
	node->next = *head;
	(*head)->prev = node;
	*head = node;
	return (node);
}

