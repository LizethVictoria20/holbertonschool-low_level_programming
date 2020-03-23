#include "lists.h"

/**
 * print_listint - Function that prints all elements from the list.
 * @h: Elements
 * Return: Always 0.
 */

size_t print_listint(const listint_t *h)
{
	size_t size;

	size = 0;

	while (h != NULL)
	{
		size++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (size);
}
