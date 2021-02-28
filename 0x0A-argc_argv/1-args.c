#include <stdio.h>

/**
 * main - print
 * @argc: arguement 1
 * @argv: argument 2
 * Return: none
 */

int main(int argc, char *argv[])
{
	int aux = argc - 1;

	(void)argv;
	printf("%d\n", aux);
	return (0);
}
