#include "holberton.h"
#include <stdio.h>

/**
 * print_binary - Function that converts a binary number to decimal.
 * @n: Elements
 * Return: Always 0.
 */

void print_binary(unsigned long int n)
{
    if (n < 2)
   {
       _putchar(n + '0');
       return;
   } 
   print_binary(n >> 1);
   _putchar((n & 1) + '0');
}
