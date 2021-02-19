#include "holberton.h"

/**
 * leet - sw33t 1337 sp34k g3n3r4t0r
 *
 *
 *
 * @s: string to convert to leetspeak
 * Return: Description of the returned value
 */

char *leet(char *s)
{
	int i, j;
	char *a;

	a = "aAeEoOtTlL4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = a[j + 10];
			}
		}
	}
	return (s);
}
