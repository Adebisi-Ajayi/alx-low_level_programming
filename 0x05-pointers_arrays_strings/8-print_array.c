#include "main.h"

/**
 * print_array - a function that prints n elements of an array of integers.
 * followed by a new line
 * @a: an input array
 * @n: an input integer
 * Return: nothing
 */
void print_array(int *a, int *b)
{
	int i = 0;

	for (; i < b; i++)
	{
		printf("%d", a[i]);
	if (i < b - 1)
		printf(", ");
	}
	putchar('\n');
}
