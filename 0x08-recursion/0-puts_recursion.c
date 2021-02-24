#include "holberton.h"
#include <stdio.h>

/**
 * _puts_recursion - recursion
 * @s: pointer
 * Return: returns pointer
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar(10);
	}
}
