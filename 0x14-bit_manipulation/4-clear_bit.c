#include "holberton.h"
#include <stdio.h>

/**
 * clear_bit - value bit 0
 * @n: decimal number
 * @index: index
 * Return: 1 o -1 on error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (n == NULL)
	{
		return (-1);
	}

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1 << index;
	*n = *n & (~mask);

	return (1);
}
