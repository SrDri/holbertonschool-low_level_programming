#include <stdio.h>

int triangle(void);

/**
 * main - function to print a triangle
 * Return: 0
 */
int main(void)
{
        triangle();
        return (0);
}

int triangle(void)
{
	int number;
	
	int espacio, i;
	
	int altura;
	
	altura = 0;
	
	printf("Enter the number of rows:");
	scanf("%d", &number);
	printf("%d", number);
	printf("\n"); /*10*/
	
	for (i = 1; i <= number; i++, altura = 0){
		for (espacio = 1; espacio <= number - i; espacio++){
			putchar(32); /**/
		}
		while (altura != 2 * i - 1){
			putchar(35); /**/
			altura++;
		}
		putchar(10); /*10*/
	}
	return (0);
}
