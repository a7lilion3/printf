#include "main.h"

int print_char(va_list *ag)
{
	_putchar(va_arg(*ag, char));
	return (1);
}
