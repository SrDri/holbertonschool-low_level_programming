#include "holberton.h"

/**
 * _memcpy - copy
 * @dest: pointer
 * @src: file
 * @n: bytes
 * Return: returns pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
