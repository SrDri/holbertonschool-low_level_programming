#include "holberton.h"

/**
 * string_toupper - sets all lowercase chars in string to uppercase
 *
 *
 *
 * @s: string to uppercase
 * Return: uppercase'd string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
