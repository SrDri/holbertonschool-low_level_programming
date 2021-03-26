#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - int to binary
 * @n: int
 * Return: length
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
