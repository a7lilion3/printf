#include "main.h"

/**
 * reverse - prints a string in reverse
 *
 * @s: pointer to a char
 */

void reverse(char *s)
{
	int i;
	int len = _strlen(s);
	char t;

	for (i = 0; i < len / 2; i++)
	{
		t = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = t;
	}
}
