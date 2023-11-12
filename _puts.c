#include "main.h"

/**
 * _puts - prints a string
 * @s: pointer to a char
 * Return: int nbr of characters printed
 */
int _puts(char *s)
{
	int len = _strlen(s);

	while (*s)
		_putchar(*s++);

	return (len);
}
