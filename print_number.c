#include "main.h"

/**
 * print_number - convert str to number and print it
 * @ag: va_list *
 * @i: int *
 * @spaces: int
 * Return: i
 */
int print_number(va_list *ag, int *i, int spaces)
{
	int len, n, temp, j;
	char *res;

	(*i)++;

	len = 0;
	n = va_arg(*ag, int);
	if (n < 0)
	{
		n = -n;
		len += _putchar('-');
	}
	else if (spaces > 0)
	{
		len += _putchar(' ');
	}
	if (n == 0)
	{
		return (_putchar('0'));
	}

	temp = n;
	for (j = 0; temp /= 10; ++j)
		;
	res = malloc(j + 1);
	if (res == NULL)
		exit(-1);

	for (j = 0; n; ++j)
	{
		res[j] = (n % 10) + '0';
		n /= 10;
	}
	res[j] = '\0';
	reverse(res);
	len += _puts(res);
	free(res);
	return (len);
}
