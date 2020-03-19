#include "lists.h"
/**
 * *add_node - function to add node to start
 * @head: pointer to pointer of list_t struct type
 * @str: pointer
 * Return: Always Successful
 */

void free_list(list_t *head)
{
    while (head != NULL)
    {
        free(head->str);
        free(head);
        head = head->next;
    }
}