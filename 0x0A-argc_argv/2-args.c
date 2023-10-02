#include <stdio.h>

/**
 * main - print call the command line
 * @argc: the arguement count
 *@argv: the arguement function
 * Return: return 0 success
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", argv++);
	}
	return (0);
}
