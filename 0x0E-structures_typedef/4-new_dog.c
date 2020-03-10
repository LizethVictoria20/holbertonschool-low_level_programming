#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - check the code for Holberton School students.
 * @s: Pointer
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}

/**
 * _strcpy - check the code for Holberton School students.
 * @dest: Pointer
 * @src: Pointer
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}

/**
 * *new_dog - function to create new dog struct
 * @name: char type
 * @age: float type
 * @owner: char type
 * Return: Always success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newd;

	newd = malloc(sizeof(struct dog));
	if (newd == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(newd);
		return (NULL);
	}
	newd->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (newd->name == NULL)
		return (NULL);
	_strcpy(newd->name, name);

	newd->age = age;

	if (owner == NULL)
	{
		free(newd->owner);
		free(newd);
		return (NULL);
	}
	newd->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (newd->owner == NULL)
		return (NULL);
	_strcpy(newd->owner, owner);

	return (newd);
}
