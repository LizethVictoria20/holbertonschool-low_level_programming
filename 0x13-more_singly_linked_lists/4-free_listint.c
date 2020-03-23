#include "lists.h"

/**
 * free_listint - function to free memory
 * @head: pointer to pointer of listint_t struct type
 * Return: Always Successful
 */

void free_listint(listint_t *head)
{
    listint_t *tmp;

    tmp = head;

    while (tmp != NULL)
    {
        tmp = tmp->next;
        free(head);
        head = tmp;
    }
}