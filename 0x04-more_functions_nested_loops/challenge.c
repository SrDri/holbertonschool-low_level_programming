#include <stdio.h>

int main(void)
{
	int number;

	int espacio, i;

	int base, altura;

	altura = 0;
	base = 0;

	printf("Enter the number of rows:");
	scanf("%d", &number);
	printf("%d", number);
	printf("\n");

	for (i = 1; i <= number; i++, altura = 0){
		for (espacio = 1; espacio <= number - i; espacio++){
			putchar(101);
		}
		while (altura <= 2 * i - 1){
			putchar(35);
			altura++;
		}
		putchar(10);
	}
	return (0);
}
