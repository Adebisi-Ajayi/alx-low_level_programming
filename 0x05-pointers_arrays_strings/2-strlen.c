#include "main.h"

/**
 * _strlen - returns the length of a strong
 * @s: string
 * Return: returns lenght;
 */

int _strlen(char *s)
{
	int ade = 0;

	while (*s != '\0')
	{
		ade++;
		s++;
	}
	return (ade);
}
