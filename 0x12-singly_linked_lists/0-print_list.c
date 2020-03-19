#include "lists.h"

/**
 * list_s - singly linked list
 * @h: string - (malloc'ed string)
 */

size_t print_list(const list_t *h)
{
    size_t size;

    size = 0;

    while (h != NULL)
    {
        size++;
        if (h->str == NULL)
        {
            printf("[%d] (nil)\n", 0);
        }
        else
        {
            printf("[%d] %s\n", h->len, h->str);
        }
        h = h->next;
    }
    return (size);
}