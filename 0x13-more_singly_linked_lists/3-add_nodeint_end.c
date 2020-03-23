#include "lists.h"

/**
 * *add_nodeint_end - function to add node to end
 * @head: pointer to pointer of listint_t struct type
 * @n: elements
 * Return: Always Successful
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;


	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	new->next = NULL;

	return (new);
}
