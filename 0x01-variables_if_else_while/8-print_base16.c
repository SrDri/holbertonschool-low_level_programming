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
	int n;
	char a;

	for (n = 48; n < 58; n++)
		putchar(n);
	for (a = 'a'; a < 'g'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
