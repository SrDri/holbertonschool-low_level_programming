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

	for (; str[n] != '\0'; n++)
		if ((n - 1) / 2 >= 2)
			_putchar(str[n]);
	_putchar(10);
}
