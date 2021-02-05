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
	int i, j;

	for (i = 48, j = 49; i < 58; i++)
	{
		while (j < 58)
		{
			if (i != j)
			{
				if (j > i)
				{
					putchar(i);
					putchar(j);
					if (i < 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
			j++;
		}
		j = 49;
	}
	putchar('\n');
	return (0);
}
