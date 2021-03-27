#include "holberton.h"
#include <stdio.h>

/**
 * set_bit - set
 * @n: decimal number
 * @index: index
 * Return: 1 o -1 on error
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
	{
		return (-1);
	}

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n = *n | (1 << index);

	return (1);
}
