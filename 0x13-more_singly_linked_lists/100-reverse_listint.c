#include "lists.h"

/**
 * reverse_listint - function to reverse the list
 * @head: pointer to pointer of listint_t struct type
 * Return: Always Successful
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *prev;

	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
