#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strleng - check the code for Holberton School students.
 * @str: Variable
 * Return: Always 0.
 */
int strleng(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	int nNew = n;
	char *ptr;
	int len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strleng(s1);
	len2 = strleng(s2);

	if (nNew >= len2)
	{
		nNew = len2;
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
	{
		ptr = malloc(sizeof(char) * (len1 + n + 1));
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < nNew; j++)
	{
		ptr[i++] = s2[j];
	}
	ptr[i++] = '\0';
	return (ptr);
}
