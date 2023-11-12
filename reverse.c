#include "main.h"

/**
 * reverse - prints a string in reverse
 *
 * @s: pointer to a char
 */

void reverse(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
		_putchar(s[i]);
}
