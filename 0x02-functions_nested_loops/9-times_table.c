#include "holberton.h"

/**
 * times_table - table 0 a 9
 * Return void
*/

void times_table(void)
{
	int i, j, res;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			res = i * j;
			if (j == 0)
			{
				_putchar(res + '0');
			}
			else if (res <= 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(res + '0');
			}
			else if (res >= 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
		}
		_putchar(10);
	}
}
