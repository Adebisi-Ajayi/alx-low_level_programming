#include "main.h"

/**
 * wildcmp_recursive - compares two strings and return 1 if identical
 * @s1: string to be checked
 * @s2: pattern to be used
 *
 * Return: 1 if identical, 0 otherwise
 */
int wildcmp_recursive(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2 || *s2 == '*')
	{
		if (wildcmp_recursive(s1 + 1, s2 + 1) || wildcmp_recursive(s1, s2 + 1))
		{
			return (1);
		}
	}
	return (0);
}

/**
 * wildcmp - compares two strings and return 1 if identical
 * @s1: string to be checked
 * @s2: pattern to be used
 *
 * Return: 1 if identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_recursive(s1, s2));
}
