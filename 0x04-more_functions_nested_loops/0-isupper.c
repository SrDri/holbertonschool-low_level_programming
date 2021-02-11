#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - check uppercase
 * @c: int check
 * Return: 1 o 0
*/

int _isupper(int c)
{
	if(c >= 65 && c <= 90)
		return(1);
	else
		return(0);
}
