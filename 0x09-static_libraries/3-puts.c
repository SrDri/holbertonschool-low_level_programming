#include "holberton.h"

void _puts(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		_putchar(s[i++]);

	_putchar(10);
}
