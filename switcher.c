#include "main.h"

/**
 * switcher - choose the right formatter
 * @c: char
 * @len: int
 * @ag: va_list *
 * @i: int *
 * @spaces: int
 * Return: void
 */
void switcher(char c, int *len, va_list *ag, int *i, int spaces)
{
	switch (c)
	{
		case 'c':
			*len += print_char(ag, i);
			break;
		case 's':
			*len += print_string(ag, i);
			break;
		case 'd':
		case 'i':
			*len += print_number(ag, i, spaces);
			break;
		case '%':
			*len += print_percent(i);
			break;
		default:
			*len += _putchar('%');
			if (spaces > 0)
				*len += _putchar(' ');
			break;
	}
}
