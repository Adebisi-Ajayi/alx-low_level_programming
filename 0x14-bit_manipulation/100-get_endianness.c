#include "main.h"

/**
 * get_endianness - check the code
 * Return: Always 0.
 */
int get_endianness(void)
{
	unsigned int number = 1;
	char *endian_check = (char *)&number;

	if (*endian_check == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
