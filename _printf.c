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
		if (format[i] != '%')
		{
			_putchar(format[i]);
			++len;
			continue;
		}
		if (format[i + 1] == '\0')
			break;
		switch (format[i + 1])
		{
			case 'c':
				len += print_char(&ag, &i);
				break;
			case 's':
				len += print_string(&ag, &i);
				break;
			case '%':
				len += print_percent(&i);
				break;
			default:
				i++;
				break;
		}
	}
	va_end(ag);
	return (len);
}
