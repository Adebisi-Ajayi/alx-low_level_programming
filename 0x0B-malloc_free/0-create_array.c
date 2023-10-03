#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - print an array
 * @size: the volume o the size
 * @c: the character
 * Return: return 0 (successully)
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
