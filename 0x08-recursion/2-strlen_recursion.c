#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - recursion
 * @s: pointer
 * Return: returns pointer
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
