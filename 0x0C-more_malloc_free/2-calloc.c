#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of memory spaces
 * @size: size of nmemb
 * Return: a malloc
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	int i = 0, _MenSize = nmemb * size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	a = malloc(_MenSize);
	if (a == NULL)
	{
		return (NULL);
	}

	while (i < _MenSize)
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
