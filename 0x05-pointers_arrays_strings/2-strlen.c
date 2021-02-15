#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - reset
 * @s - char 
 * return - lengt string
 */

int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
		i++;
	return (i);
}
