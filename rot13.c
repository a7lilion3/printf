#include "main.h"

/**
 * rot13 - implementation of the rot13 cipher
 *
 * @s: char *
 *
 * Return: char*
 */

char *rot13(char *s)
{
	char *in = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *out = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j, len = _strlen(s);

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == in[j])
			{
				s[i] = out[j];
				break;
			}
		}
	}
	s[i] = '\0';
	return (s);
}
