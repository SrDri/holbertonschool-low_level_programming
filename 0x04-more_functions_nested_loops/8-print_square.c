#include "holberton.h"

/**
 * print_square - Print a diagonal line
 * @size: longitud
 * Return: void
*/

void print_square(int size)
{
	int ancho, largo;

	ancho = largo = size;

	if (size <= 0)
		_putchar(10);
	while (largo > 0)
	{
		ancho = size;
		while (ancho > 0)
		{
			_putchar('#');
			ancho--;
		}
		_putchar(10);
		largo--;
	}
}
