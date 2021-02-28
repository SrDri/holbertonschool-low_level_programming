#include <stdio.h>
#include <stdlib.h>

/**
 * main - print
 * @argc: arguement 1
 * @argv: argument 2
 * Return: none
 */

int main(int argc, char *argv[])
{
	int num1, num2, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	
	mult = num1 * num2;

	printf("%d\n", mult);
	return (0);
}
