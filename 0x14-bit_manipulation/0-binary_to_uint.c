#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_to_uint - the base to convert to
 * @b: the value to convert
 * Return: Nothing
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int cert = 0;
	int k;

	if (b == NULL)
		return (0);

	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] == '0')
		{
			cert = cert << 1;
		}
		else if (b[k] == '1')
		{
			cert = (cert << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (cert);
}
