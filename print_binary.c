#include "main.h"

/**
 * print_binary - converts a number to binary and print it
 * @ag: va_list *
 * @i: int *
 * Return: int
 */
int print_binary(va_list *ag, int *i)
{
	int len, j;
	unsigned int n, t;
	char *res;

	(*i)++;
	len = 0;

	n = va_arg(*ag, unsigned int);
	t = n;
	for (j = 0; t; ++j)
		t /= 2;
	res = malloc(j + 1);
	if (res == NULL)
		exit(-1);
	for (j = 0; n; ++j)
	{
		res[j] = (n % 2) + '0';
		n /= 2;
	}
	res[j] = '\0';
	reverse(res);
	len += _puts(res);
	free(res);
	return (len);
}
