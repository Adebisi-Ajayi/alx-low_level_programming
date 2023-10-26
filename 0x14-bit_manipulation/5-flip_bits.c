#include "main.h"

/**
 * flip_bits - bit to be flipped
 * @n: the value of the bit
 * @m: the second value
 * Return: nothing
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int adebisi = n ^ m;
	unsigned int mike = 0;

	while (adebisi > 0)
	{
		mike += adebisi & 1;
		adebisi >>= 1;
	}
	return (mike);
}
