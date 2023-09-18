#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse
 * @s: string to print
 */

void print_rev(char *s)
{
	int ade = 0;

	while (s[ade] != '\0')
	{
		ade++;
	}
	for (int i = ade - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
