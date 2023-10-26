#include "main.h"
#include <stdio.h>
/**
 * clear_bit - the bit to clear
 * @n: the value to be cleared
 * @index: the array to be cleared
 * Return: nothing
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int elk;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	elk = ~(1UL << index);
	*n = (*n & elk);
	return (1);
}
