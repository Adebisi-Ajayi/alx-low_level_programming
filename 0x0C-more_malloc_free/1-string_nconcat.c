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
	char *new_star;
	unsigned int a = 0, add1 = 0, add2 = 0;

	if (s1 == NULL)
		s1 = "";
	while (s1[add1])
		add1++;
	if (s2 == NULL)
		s2 = "";
	while (s2[add2])
		add2++;
	if (n >= add2)
		n = add2;
	new_star = malloc(add1 + n + 1);
	if (new_star == NULL)
		return (NULL);

	for (; a < (add1 + n); a++)
	{
		if (a < add1)
			new_star[a] = *s1, s1++;
		else
			new_star[a] = *s2, s2++;
	}
	new_star[a] = '\0';
	return (new_star);
}
