#include "main.h"

/**
 * factorial - prints the factorial of a given number
 * @ade: return the factorial
 * Return: return int
 */
int factorial(int ade)
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

		for (int ade = 1; ade <= n; add++)
		{
			results *= ade;
		}
		return (results);
	}
}
