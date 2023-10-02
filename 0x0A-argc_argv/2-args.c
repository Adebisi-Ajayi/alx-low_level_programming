#include <stdio.h>

/**
 * main - print call the command line
 * @argc: the arguement count
 *@argv: the arguement function
 * Return: return 0 success
 */
int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
