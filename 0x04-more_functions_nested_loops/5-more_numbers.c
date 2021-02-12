#include "holberton.h"

/**
 * more_numbers - returns 1 to 14 x10
 * Return: Return 1 to 14
 */

void more_numbers(void)
{

	int a, b;

	a = 0;
	b = 0;

	while (a < 10)
	{
		b = 0;
		while (b < 15)
		{
			if (b >= 10)
				_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			b++;
		}
		_putchar('\n');
		a++;
	}
}
