#include "lists.h"

/**
 * reverse_listint - function to reverse the list
 * @head: pointer to pointer of listint_t struct type
 * Return: Always Successful
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *next;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = next;

		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
