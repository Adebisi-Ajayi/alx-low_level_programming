#include "main.h"
#include <stdlib.h>
/**
 * _calloc - calloc value
 * @nmemb: number of member
 * @size: size number
 * Return: return int
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	void *ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
