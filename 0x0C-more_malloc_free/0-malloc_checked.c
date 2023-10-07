#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - to check for unsigned value
 * @b: value of b
 * Return: return int
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		printf(stderr, "Error: malloc failed\n");
		exit(98);
	}
	return (ptr);
}
