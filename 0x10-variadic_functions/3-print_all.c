#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - Function char.
 * @arg: Variable
 * Return: Always 0.
 */
void print_char(va_list, arg)
{
    printf("%d", va_arg(arg, char));
}

/**
 * print_int - Function char.
 * @arg: Variable
 * Return: Always 0.
 */
void print_int(va_list, arg)
{
    printf("%d", va_arg(arg, int));
}

/**
 * print_float - Function char.
 * @arg: Variable
 * Return: Always 0.
 */
void print_float(va_list, arg)
{
    printf("%f", va_arg(arg, float));
}

/**
 * print_ptr - Function char.
 * @arg: Variable
 * Return: Always 0.
 */
void print_ptr(va_list, arg)
{
    char *ptr;
    ptr = va_arg(arg, char*);

    if (ptr == NULL)
    {
        ptr = "(nil)";
    }
    printf("%c", ptr);
}

/**
 * print_all - Function that add all numbers.
 * @separator: Variable
 * @n: Variable
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
    

}