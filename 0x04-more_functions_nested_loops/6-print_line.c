#include "holberton.h"

/**
 * print_line - return line n veces
 * @n: variable n
 * Return: Return line
 */

void print_line(int n)
{
	int b;

	b = 95;

	if (n > 0)
		for (b = 0; b < n; b++)
			_putchar(95);
	else
		_putchar(10);

	_putchar(10);
}
