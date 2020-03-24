#include "lists.h"

/**
 * listint_len - Function that prints all elements from the list.
 * @h: Elements listint_t
 * Return: Always 0.
 */

size_t listint_len(const listint_t *h)
{
	size_t size;

	size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
