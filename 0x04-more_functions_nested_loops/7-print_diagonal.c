#include "holberton.h"

/**
 * print_diagonal - Print a diagonal line
 * @n: longitud
 * Return: void
 */

void print_diagonal(int n)
{
	int i, espacio;

	espacio = 0;
	if (n <= 0)
		_putchar(10);
	while (n > 0)
	{
		i = 0;
		while (espacio > i)
		{
			_putchar(' ');
			i++;
		}
		_putchar('\\');
		_putchar('\n');
		n--;
		espacio++;
	}
}
