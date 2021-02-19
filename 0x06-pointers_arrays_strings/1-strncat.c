#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - concats strings
 *
 * @n: number of chars
 * @dest: destination string
 * @src: source string
 * Return: returns destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j != n)
		dest[i++] = src[j++];

	dest[i] = '\0';
	return (dest);
}
