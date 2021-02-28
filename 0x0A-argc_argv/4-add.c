#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * isnumber - determina a number or not
 *
 * @number: number check
 * Return: 1 if number, 0 if not
 */

int isnumber(char *number)
{
	int i;

	i = 0;
	while (number[i] != '\0')
	{
		if (isdigit(number[i]))
			i++;
		else
			return (0);
	}
	return (1);
}

/**
 * main - print
 * @argc: arguement 1
 * @argv: argument 2
 * Return: none
 */

int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (isnumber(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
