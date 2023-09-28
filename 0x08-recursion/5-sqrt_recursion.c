#include "main.h"

/**
 * _sqrt_recursion - print natural square root of a number
 * @n: return the functions of square root of a number
 * Return: return int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (1, n / 2, n);
}

/**
 *_sqrt - return the square root
 *@low: test number
 *@n: square number
*@high: test the two
 *Return: the square root of n
 */
int _sqrt(int low, int high, int n)
{
	if (low <= high)
	{
		int mid = low + (high - low) / 2;
		int square = mid * mid;

		if (square == n)
		{
			return (mid);
		}
		else if (square < n)
		{
			return (_sqrt(mid + 1, high, n));
		}
		else
		{
			return (_sqrt(low, mid - 1, n));
		}
	}
	return (-1);
}
/**
 * main - print the root
 * Return: the root
 */
int main(void)
{
	int n = 25;

	int result = _sqrt_recursion(n);

	if (result == -1)
	{
		printf("No natuural square root or %d\n", n);
	}
	else
	{
		printf("The natural square root of %d is %d\n", n, result);
	}
	return (0);
}
