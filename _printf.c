#include "main.h"

/**
 * _printf - output according to a format
 * @format: const char *
 * Return: int
 */
int _printf(const char *format, ...)
{
	int i, j, spaces, len;
	va_list ag;

	len = spaces = 0;
	va_start(ag, format);
	for (i = 0; format[i] != '\0'; ++i)
	{
		if (!format || (format[0] == '%' && !format[1]))
			return (-1);
		if (format[i] != '%')
		{
			len += _putchar(format[i]);
			continue;
		}
		for (j = 1; format[i + j] == ' '; ++j)
			spaces++;
		i += j - 1;
		if (format[i + 1] == '\0')
		{
			len += _putchar(format[i]);
			break;
		}
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
				len += _putchar('%');
				if (spaces > 0)
					len += _putchar(' ');
				break;
		}
	}
	va_end(ag);
	return (len);
}
