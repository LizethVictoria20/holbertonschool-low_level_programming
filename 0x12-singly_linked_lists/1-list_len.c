#include "lists.h"

/**
 * list_len - Print number of elements of a list_t list
 * @h: Head list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
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
