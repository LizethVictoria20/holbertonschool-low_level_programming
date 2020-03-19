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
 * *add_node - function to add node to start
 * @head: pointer to pointer of list_t struct type
 * @str: pointer
 * Return: Always Successful
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
	new->next = *head;
	*head = new;

	return (*head);
}
