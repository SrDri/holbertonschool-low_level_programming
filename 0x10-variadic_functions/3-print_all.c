#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_c - print char
 * @v: Value to be printed
 * Return: void
 */
void print_c(va_list v)
{
	printf("%c", va_arg(v, int));
}

/**
 * print_i - print integer
 * @v: Value to be printed
 * Return: void
 */
void print_i(va_list v)
{
	printf("%d", va_arg(v, int));
}

/**
 * print_s - print string
 * @v: Value to be printed
 * Return: void
 */
void print_s(va_list v)
{
	char *str = va_arg(v, char *);

	if (str == NULL)
	{
		str = "(nil)";
	}
	printf("%s", str);
}

/**
 * print_f - print float
 * @v: Value to be printed
 * Return: void
 */
void print_f(va_list v)
{
	printf("%f", va_arg(v, double));
}

/**
 * print_all - function to print everything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char *const format, ...)
{
	int i, j;

	op_t ops[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}};
	va_list valist;
	char *empty = "";
	char *separator = ", ";

	va_start(valist, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (ops[j].op != NULL)
		{
			if (format[i] == ops[j].op[0])
			{
				printf("%s", empty);
				ops[j].f(valist);
				empty = separator;
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
