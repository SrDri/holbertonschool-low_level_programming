#include "holberton.h"

/**
 * _isdigit - Check 0 a 9
 * @c: input to check
 * Return: return 1 o 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
