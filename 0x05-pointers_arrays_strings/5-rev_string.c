#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - imprime
 * @s: string
 * Return: s - string
 */

void rev_string(char *s)
{
	char ax[1000];
	int z, i;

	z = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		ax[i] = s[i];
	}
	ax[i] = 0;
	i--;
	for (; i >= 0; i--)
	{
		s[z] = ax[i];
		z++;
	}
}
