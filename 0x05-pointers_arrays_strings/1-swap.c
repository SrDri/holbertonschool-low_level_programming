#include "holberton.h"

/**
 * swap_int - Swap
 * @a: Numb 1
 * @b: Numb 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;

}
