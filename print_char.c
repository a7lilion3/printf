#include "main.h"

/**
 * print_char - prints character
 * @ag: va_list *
 * Return: 1
 */

int print_char(va_list *ag)
{
	_putchar(va_arg(*ag, char));
	return (1);
}
