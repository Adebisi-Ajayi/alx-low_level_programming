#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - print the string
 * @s1: length of number one
 * @s2: length of number two
 * @n: number of integer
 * Return: return int
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL || s1 == "")
	{
		return (NULL);
	}
	if (s2 == NULL || s2 == "")
	{
		return (NULL);
	}

	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);

	if (n >= len2) n = len2;

	char *result = (char *)malloc(len1 + n + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strncat(result, s2, n);
	return (result);
}
