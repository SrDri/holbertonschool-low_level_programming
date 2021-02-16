#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - imprime mitad
 * @str: string
 * Return: s - string
 */

void puts_half(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
		if (n > 4 || (n - 1) / 2 > 1)
			_putchar(str[n]);
	_putchar(10);
}
