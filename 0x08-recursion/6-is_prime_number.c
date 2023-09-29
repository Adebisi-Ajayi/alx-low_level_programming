#include "main.h"
/**
 * is_prime_number - print the prime number
 * @n: determine the prime number
 * Return: return int
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, 2));
}
/**
 * is_prime - check for the prime
 * @start: start to check
 * @n: check for value of n
 * Return: return it
 */
int is_prime(int n, int start)
{
	if (start * start > n)
	{
		return (1);
	}
	if (n % start == 0)
	{
		return (0);
	}
	return (is_prime(n, start + 1));
}
