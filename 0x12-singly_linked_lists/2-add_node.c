#include "lists.h"
/**
 * *add_node - function to add node to start
 * @head: pointer to pointer of list_t struct type
 * @str: pointer
 * Return: Always Successful
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;
	int length;
	char *string;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	length = 0;

	while (str[length] != '\0')
	{
		string = strdup(str);
		length++;
	}

	new->len = length;
	new->str = string;
	new->next = *head;
	*head = new;

	return (*head);
}
