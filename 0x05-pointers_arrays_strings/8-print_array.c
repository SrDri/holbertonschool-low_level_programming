#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - imprime array
 * @a: int 1
 * @n: int 2
 * Return: Arrays numbers
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1 )
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
