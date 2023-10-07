#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - calloc value
 * @nmemb: number of member
 * @size: size number
 * Return: return int
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a = 0;
	char adebisi;

	if (nmemb == 0 || size == 0)
		return (NULL)

	adebisi = malloc(nmemb * size);

	if (adebisi == NULL)
		return (NULL);
	for (; a < nmemb * size; a++)
		*(adebisi + a) = 0;
	return (adebisi);
}
