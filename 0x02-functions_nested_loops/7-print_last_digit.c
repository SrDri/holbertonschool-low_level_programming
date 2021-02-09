#include "holberton.h"

/**
 * print_last_digit - prints the last digit
 * @n: int to pull last digit from
 * Return: last digit
 */

int print_last_digit(int n)
{
	int x;

	x = n % 10;

	if (n < 0)
		x = x * -1;
	_putchar(x + '0');
	return (x);
}
