#include "holberton.h"

/**
 * _isalpha - returns 1 if is a lowercase letter
 * @c: check lowercase or uppercase
 * Return: Returns 1 or 0
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
