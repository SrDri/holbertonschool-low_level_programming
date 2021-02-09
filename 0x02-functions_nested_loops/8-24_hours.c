#include "holberton.h"

/**
 * main - check the 23:59
 * jack_bauer:return 23:59
 * @void: descrip 23:59
 * Description: malditos locos
 * Return: 23:59
*/

void jack_bauer(void)
{
	int h, m;

	h = 0;

	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
