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
	int n = '0';

	while (n <= '9')
	{
		putchar(n++);
	}
	putchar('\n');
	return (0);
}
