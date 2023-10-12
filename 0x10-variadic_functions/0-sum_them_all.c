#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - addition of all the number
 * @n: number to sum
 *
 * Return: nothing
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	int sum = 0;

	for (unsigned int i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
