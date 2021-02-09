#include "holberton.h"

/**
 * _abs - Absolute value
 *
 * @n: int to get absolute value of
 * Return: Return absolute value.
 */
int _abs(int n)
{
	if (n <= 0)
		return (n - (n * 2));
	else
		return (n);
}
