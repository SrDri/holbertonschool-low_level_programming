#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - Numbers
 *
 *  Description: Uses for
 *  Return: void
 */

int main(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
