#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary - the base to print
 * @n: the value to print
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar((n & 1) ? '1' : '0');
}
