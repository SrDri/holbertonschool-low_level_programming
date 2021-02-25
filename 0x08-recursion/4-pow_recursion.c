#include "holberton.h"
#include <stdio.h>

/**
 * _pow_recursion - recursion
 * @x: pointer x
 * @y: ponter y
 * Return: returns pointer
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
