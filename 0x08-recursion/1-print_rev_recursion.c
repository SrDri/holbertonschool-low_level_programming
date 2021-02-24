#include "holberton.h"
#include <stdio.h>

/**
 * _print_rev_recursion - recursion
 * @s: pointer
 * Return: returns pointer
 */
void _print_rev_recursion(char *s)
{	
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
