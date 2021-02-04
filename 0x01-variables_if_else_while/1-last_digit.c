#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - Positive o Negative
 *
 *  Description: Uses if and else if
 *  Return: Return string
 */

int main(void)
{
	int n, j;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	j = n % 10;

	if (j > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, j);
	else if (j == 0)
		printf("Last digit of %i is %i and is 0\n", n, j);
	else if (j < 6 & j != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, j);

	return (0);

}
