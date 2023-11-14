#include "main.h"

/**
 * print_rot13 - print and rot13 a string
 * @ag: va_list *
 * @i: int *
 * Return: int
 */
int print_rot13(va_list *ag, int *i)
{
	char *res, *str;
	int len = 0;
	int j;

	(*i)++;

	str = va_arg(*ag, char *);
	if (str == NULL)
		return (-1);
	res = malloc(_strlen(str + 1));
	if (res == NULL)
		return (-1);

	for (j = 0; (res[j] = str[j]) != '\0'; ++j)
		;
	rot13(res);
	len += _puts(res);
	free(res);
	return (len);
}
