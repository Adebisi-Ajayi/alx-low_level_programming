#include "main.h"

/**
 * _sqrt_recursion - print natural square root of a number
 * @n: return the functions of square root of a number
 * Return: return int
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}

/**
 *_sqrt - return the square root
 *@n: test number
 *@x: square number
 *Return: the square root of n
 */
int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
