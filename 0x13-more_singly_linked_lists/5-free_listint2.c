#include "lists.h"

/**
 * free_listint2 - function to free memory
 * @head: pointer to pointer of listint_t struct type
 * Return: Always Successful
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}
	tmp = *head;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
	}
}
