#include "main.h"
#include <stdio.h>
/**
 *_puts - prints a string
 * @str: string to print
 *
 * Description: print a string
 * on success: return the number of characters printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchr('\0');
}
