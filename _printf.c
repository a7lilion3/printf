#include "main.h"

/**
 * _printf - output according to a format
 * @format: const char *
 * Return: int
 */
int _printf(const char *format, ...)
{
	int i, len;
	va_list ag;

	len = 0;
	va_start(ag, format);
	for (i = 0; format[i] != '\0'; ++i)
	{
		/* search for placeholders */
		if (format[i] != '%')
		{
			_putchar(format[i]);
			++len;
			continue;
		}

		/* last char check */
		if (format[i + 1] == '\0')
			break;

		switch (format[i + 1])
		{
			case 'c':
				/* case of one char */
				len += print_char(&ag, &i);
				break;
			case 's':
				/* case of a string */
				len += print_string(&ag, &i);
				break;
			case '%':
				/* case of printing % */
				len += print_percent(&i);
				break;
		}
	}
	va_end(ag);

	return (len);
}
