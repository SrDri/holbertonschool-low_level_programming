#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - imprime
 * @s: string
 * Return: s - string
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	i--;
	while (i >= 0)
		putchar(s[i--]);
       	
	putchar(10);
}
