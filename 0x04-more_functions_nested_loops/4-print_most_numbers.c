#include "holberton.h"

/**
 * print_most_numbers - returns 1 to 9 not 2 and 4
 * Return: Return 1 to 9 sin: 2 and 4
*/

void print_most_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
		if (a != 50 && a != 52)
			_putchar (a);
	_putchar (10);
}
