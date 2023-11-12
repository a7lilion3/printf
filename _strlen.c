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
	int i;

	for (i = 0; *s != '\0'; s++)
		++i;

	return (i);
}
