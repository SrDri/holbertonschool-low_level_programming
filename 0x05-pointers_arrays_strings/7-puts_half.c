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
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	if (i % 2 != 0)
		i++;
	i /= 2;

	for (; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar(10);
}
