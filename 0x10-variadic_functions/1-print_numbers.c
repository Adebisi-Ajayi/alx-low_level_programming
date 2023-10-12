#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - A function that print numbers followed by a new line.
 * @separator: An input string to be printed between numbers.
 * @n: number of parameters
 * @...: Other parameters
 * Return: The of all parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list adebisi;
	unsigned int q = 0;
	int number;

	va_start(adebisi, n);
	for (; q < n; q++)
	{
		number = va_arg(adebisi, int);
		printf("%d", number);
		if (separator == NULL)
			continue;
		if (q < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(adebisi);
}
