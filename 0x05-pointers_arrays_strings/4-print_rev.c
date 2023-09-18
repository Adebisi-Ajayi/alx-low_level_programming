#include "main.h"
/**
 * print_rev - print string in reverse order
 * @s: string to print
 */

void print_rev(char *s)
{
	int ade = 0;

	while (str[ade] != '\0')
	{
		ade++;
	}
	for (int i = ade - 1; i >= 0; i--)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
