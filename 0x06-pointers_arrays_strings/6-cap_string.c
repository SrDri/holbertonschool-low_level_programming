#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - capitalizes chars after given deliminators
 * @str: string to uppercase
 * Return: returns modified string
 */

char *cap_string(char *str)
{
	int i, j;
	char aux[] = {' ', '\t', '\n', ',', ';', '.',
		      '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		for (j = 0 ; aux[j] != '\0' ; j++)
		{
			if (str[0] >= 'a' && str[0] <= 'z')
			{
				str[0] = str[0] - 32;
			}
			if (str[i] == aux[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
	}
	return (str);
}
