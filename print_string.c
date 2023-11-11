#include "main.h"

int print_string(va_list *ag)
{
	return (_puts(va_arg(*ag, char *)));
}
