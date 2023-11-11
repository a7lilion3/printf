#include "main.h"

/**
 * _puts - prints a string
 * @s: pointer to a char
 * Return: int nbr of characters printed
 */
int _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		_putchar(s[i]);
	}

	return (i);
}
