#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_bit - the bit to get
 * @n: value to get
 * @index: the array of inde
 * Return: nothing
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int elk;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (1);
	}

	elk = (1UL << index);

	if ((n & elk) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
