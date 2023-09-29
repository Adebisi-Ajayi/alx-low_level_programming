#include "main.h"

/**
 * is_palindrome - print the word in reverse order
 * @s: check the word in reverse order
 * Return: retun character
 */

int is_palindrome(char *s)
{
	if (strlen(s) <= 1)
	{
		return (1);
	}
	if (s[0] != s[strlen(s) - 1])
	{
		return (0);
	}
}
