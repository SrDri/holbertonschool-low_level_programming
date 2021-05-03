#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - longitud de string
 * @s: content string
 * Return: leng string
*/

int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;
	return (i);
}
