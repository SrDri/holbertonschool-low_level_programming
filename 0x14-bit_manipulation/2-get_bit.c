#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - index to binary
 * @n: int
 * @index: pos index
 * Return: 1 or 0
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		return (n >> index & 1);
	}
}
