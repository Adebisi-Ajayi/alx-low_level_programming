#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null bytes (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: a pointer to destination of string
 * @src: a pointer to source string to copy from
 *
 * return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}
