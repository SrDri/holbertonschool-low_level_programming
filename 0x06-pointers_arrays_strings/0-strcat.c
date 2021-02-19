#include "holberton.h"

/**
 * _strcat - concat strings, src appended to dest
 *
 * @dest: destination string
 * @src: source string
 * Return: returns finished string
*/

char *_strcat(char *dest, char *src)
{
	int i, n;

	for (n = 0; src[n] != '\0'; n++)
		n++;
	for (i = 0; src[i] != '\0'; i++, ++n)
		dest[n] = src[i];
	dest[n] = 0;

	return dest;

}
