#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * _puts - imprime
 * @str: string
 * Return: str - string
*/

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		_putchar(str[i++]);

	_putchar(10);
}
