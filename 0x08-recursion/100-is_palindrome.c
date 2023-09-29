#include "main.h"

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
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}
		return (len);


/**
 * check_palindrome - check if a string is palindrome
@s: the string to be checked
 * @len: the length of s
 * @index: the index
 *
 * Return: if the string is palindrome
 *  if the string is not palindrome
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);
	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));
	return (0);
}
