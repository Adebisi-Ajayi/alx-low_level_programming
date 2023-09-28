#include "main.h"

/**
 * _strlen_recursion - printthe length of a string
 * @s: print a function that returns the length of a string
 * Return: return int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
