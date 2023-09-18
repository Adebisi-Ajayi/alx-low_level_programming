#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (int i = length - 1; i >= 0; i--)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
