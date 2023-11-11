#include "main.h"

/**
 * print_string - prints string
 * @ag: va_list *
 * @i: int *
 * Return: int
 */

int print_string(va_list *ag, int *i)
{
	(*i)++;
	return (_puts(va_arg(*ag, char *)));
}
