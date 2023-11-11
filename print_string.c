#include "main.h"

/**
 * print_string - prints string
 * @ag: va_list *
 * @i: int *
 * Return: int
 */

int print_string(va_list *ag, int *i)
{
	char *s = va_arg(*ag, char *);

	(*i)++;

	if (s == NULL)
		return (_puts("(null)"));
	return (_puts(s));
}
