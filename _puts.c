#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: pointer to a char
 *
 * Return: int nbr of characters printed
 */

int _puts(char *s)
{
	int counter;

	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
		counter++;
	}
	_putchar('\n');

	return (counter);
}
