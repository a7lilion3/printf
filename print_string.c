#include "main.h"

/**
 * print_string - prints string
 * @ag: va_list *
 * Return: int
 */

int print_string(va_list *ag)
{
	return (_puts(va_arg(*ag, char *)));
}
