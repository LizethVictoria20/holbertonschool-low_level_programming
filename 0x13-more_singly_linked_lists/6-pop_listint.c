#include "lists.h"

/**
 * pop_listint - function to delete heade node
 * @head: pointer to pointer of listint_t struct type
 * Return: Always Successful
 */

int pop_listint(listint_t **head)
{
	listint_t *new;
	int n;

	new = *head;
	n = 0;

	if (*head == NULL)
	{
		return (n);
	}
	n = new->n;
	new = new->next;
	free(*head);
	*head = new;

	return (n);
}
