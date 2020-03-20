#include "lists.h"

/**
 * _strlen - check the code for Holberton School students.
 * @s: Pointer
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * add_node_end - function to add node to end
 * @head: pointer to pointer of list_t struct type
 * @str: pointer
 * Return: Always Successful
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	int length;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	new->len = length;
	new->str = strdup(str);

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	tmp = *head;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	new->next = NULL;

	return (*head);
}
