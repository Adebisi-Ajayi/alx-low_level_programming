#include "main.h"

/**
 * factorial - prints the factorial of a given number
 * @n: return the factorial
 * Return: return int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		int results = 1;

		for (int i = 1; i <= n; i++)
		{
			results *= i;
		}
		return (results);
	}
}
