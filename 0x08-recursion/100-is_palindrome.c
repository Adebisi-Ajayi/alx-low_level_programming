#include "main.h"
#include <string.h>
/**
 * is_palindrome - print the word in reverse order
 * @s: check the word in reverse order
 * Return: retun character
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
	{
		return (1);
	}
	if (s[0] != s[len - 1])
	{
		return (0);
	}
	s[len - 1] = '\0';
	return (is_palindrome(s + 1));
}
/**
 * find_strlen - return the lenght
 * @s:the string to be measured
 *
 * Return: the length of the string
 */
int find_strlen(char *s)
{
	int len = strlen(s);

	return (len);
}
