#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 *
 * @c: int
 *
 * Return: 1.
 */

int _putchar(int c)
{
	write(1, &c, 1);
	return (1);
}
