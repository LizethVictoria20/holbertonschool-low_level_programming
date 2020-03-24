#include "lists.h"

/**
 * get_nodeint_at_index - function to free memory
 * @head: pointer to pointer of listint_t struct type
 * @index: number of elements
 * Return: Always Successful
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	node = head;
	i = 0;

	while (node != NULL)
	{
		if (i == index)
		{
			return (node);
		}
		i++;
		node = node->next;
	}
	return (NULL);
}
