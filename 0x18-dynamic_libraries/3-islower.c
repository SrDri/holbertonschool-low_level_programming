#include "holberton.h"

/**
 * _islower - returns 1 if is a lowercase letter
 * @c: character to check for lowercase
 * Return: Returns 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
