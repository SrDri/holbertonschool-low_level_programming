#include "holberton.h"

/**
 * print_last_digit - prints the last digit
 * @n: int to pull last digit from
 * Return: last digit
 */

int print_last_digit(int n)
{
	int last;

	last = _abs(n);
	last %= 10;
	_putchar(last + '0');
	return (last);
}
