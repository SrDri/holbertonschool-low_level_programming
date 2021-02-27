#include "holberton.h"

/**
 * print_triangle - returns triangle
 * @size: Longitud
 * Return: Return 1 to 14
 */

void print_triangle(int size)
{
	int fila, columna, i, h2;

	fila = columna = size;

	for (i = 1; i <= fila; i++)
		for (h = 1; h <= columna; h++)
			_putchar(32);
	columna--;
	for (h2 = 1; h2 <= i; h2++)
		_putchar(35);

	_putchar(10);
}
