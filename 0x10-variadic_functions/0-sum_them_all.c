#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - A function that sums all its parameters.
 * @n: number of parameters
 * @...: Other parameters
 * Return: The of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list adebisi;
	unsigned int z = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(adebisi, n);
	for (; z < n; z++)
		sum += va_arg(adebisi, int);

	va_end(adebisi);
	return (sum);
}
