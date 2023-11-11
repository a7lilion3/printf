#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 *
 * @c: int
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropriately
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}
