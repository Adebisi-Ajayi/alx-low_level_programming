#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * set_bit - the bit to set
 * @n: the value to set
 * @index: the array to set
 * Return: nothing
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int elk;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	elk = (1UL << index);

	*n = (*n | elk);
	return (1);
}
