#include <stdio.h>
#include "holberton.h"

/**
 * recursive_longitud - Recursion
 * Task 2 - longitud
 * @s: string
 * @i: contador
 * Return: return longitud
 */
int recursive_longitud(char *s, int i)
{
	if (s[i] != '\0')
		return (recursive_longitud(s, i + 1));
	return (i - 1);
}

/**
 * chequeelo - funcion 1
 * chequea si es palindrome | l = longitud | i = iterador
 * @l: longitud
 * @i: contador
 * @s: iterador
 * Return: return 1 o 0
 */
int chequeelo(char *s, int l, int i)
{
	if (s[i] == s[l])
		return (chequeelo(s, l - 1, i + 1));
	if (s[i] == s[l] || i > l)
		return (1);
	if (s[i] != s[l])
		return (0);
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: string
 * Return: 1 si es palindrome, 0 si no
 */
int is_palindrome(char *s)
{
	int longitud;

	longitud = recursive_longitud(s, 0);
	return (chequeelo(s, longitud, 0));
}
