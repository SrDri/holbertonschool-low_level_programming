#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int az, i;

	for (i = 0; i < 10; i++)
	{
		for (az = 'a'; az <= 'z'; az++)
		{
			_putchar(az);
		}
		_putchar('\n');
	}

	return;
}
