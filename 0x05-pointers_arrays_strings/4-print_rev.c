#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	int lenght = 0, index = 0;

	lenght = _strlen(s);
	for (index = lenght - 1; index >= 0; index--)
		_putchar(s[index]);
	_putchar('\n');
}

/**
 * _strlen - return the lenght of a string
 * @s: string
 * Return: returns lenght;
 */

int _strlen(char *s)
{
	int count, inc;

	inc = 0;
	for (count = 0; s[count] != '\0'; count++)
	inc++;
	return (inc);
}
