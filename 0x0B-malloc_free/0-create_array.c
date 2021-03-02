#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - array
 * @size: size
 * @c: string
 * Return: a
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size * sizeof(char));
	if (a == NULL)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
