#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - A function that reallocate a memory block
 * @ptr: pointer to the memory
 * @old_size: old size in bytes of memory
 * @new_size: new size in bytes of memory
 * Return: void pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_loc, *new_part;
	unsigned int o = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	new_loc = malloc(new_size);
	new_part = ptr;
	if (old_size > new_size)
		old_size = new_size;
	for (o = 0; o < old_size; o++)
		new_loc[o] = new_part[o];
	free(ptr);
	return (new_loc);
}
