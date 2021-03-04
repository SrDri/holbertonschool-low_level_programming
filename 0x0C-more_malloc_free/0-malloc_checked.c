#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 * @b: int
 * Return: a or 98
 */

void *malloc_checked(unsigned int b)
{
	char *a;

	if (b == 0)
	{
		return (NULL);
	}

	a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
