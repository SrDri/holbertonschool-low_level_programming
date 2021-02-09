#include "holberton.h"

/**
 * print_last_digit - prints the last digit
 * @n: int to pull last digit from
 * Return: last digit
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (n < 0)
		_putchar(last + '0');
	return (last);
}
