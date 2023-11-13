#include "main.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: pointer to a char
 *
 * Return: the length of the string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		++i;

	return (i);
}
