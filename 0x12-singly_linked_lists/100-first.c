#include "lists.h"

void __attribute__((constructor)) phrase(void);
/**
 * primary - print before
 * Return: void
 */

void phrase(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}