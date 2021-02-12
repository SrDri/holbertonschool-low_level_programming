#include "holberton.h"

/**
 * print_line - return line n veces
 * @n: variable n
 * Return: Return line
 */

void print_line(int n)
{
	int b;

	for (b = 0; b < n; b++)
		_putchar(95);

	_putchar('\n');
}
