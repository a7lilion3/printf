#include "main.h"

/**
 * _printf - output according to a format
 * @format: const char *
 * Return: int
 */
int _printf(const char *format, ...)
{
	int i, c, len;
	va_list ag;

	len = 0;
	va_start(ag, format);
	for (i = 0; format[i] != '\0'; ++i)
	{
		c = format[i];

		/* search for placeholders */
		if (c != '%')
		{
			++len;
			continue;
		}

		/* last char check */
		if (c + 1 == '\0')
			break;

		switch (c + 1)
		{
			case 'c':
				/* case of one char */
				len += print_char(&ag);
				break;
			case 's':
				/* case of a string */
				len += print_string(&ag);
				break;
			case '%':
				/* case of printing % */
				len += print_percent();
				break;
		}
	}
	va_end(ag);

	return (len);
}
