#include <stdio.h>
#include <stdlib.h>

/**
 * main - a programm that prints multiplies two numbers
 * @argc: argument counter
 * @argv: argument value
 * Return: return 0 (Success)
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	int number1 = atoi(argv[1]);
	int number2 = atoi(argv[2]);
	int cert = number1 * number2;

	printf("%d\n", cert);
	return (0);
}
