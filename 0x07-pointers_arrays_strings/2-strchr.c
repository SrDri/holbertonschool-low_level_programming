#include "holberton.h"

/**
 * _strchr - copy
 * @s: pointer
 * @c: bytes
 * Return: return pointer
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
		return (s + i);

	return ('\0');
}
