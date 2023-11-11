#include "main.h"

/**
 * print_char - prints character
 * @ag: va_list *
 * @i: int *
 * Return: 1
 */

int print_char(va_list *ag, int *i)
{
	_putchar(va_arg(*ag, int));
	(*i)++;
	return (1);
}
