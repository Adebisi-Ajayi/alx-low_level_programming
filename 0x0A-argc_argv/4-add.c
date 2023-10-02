#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * add_positive_recursive - A program that adds positive numbers
 * @index: The arguments' counter
 * @argv: The argument's values
 * Return: Always 0 (Success)
 */
int add_positive_recursive(char **argv, int index)
{
	if (argv[index] == NULL)
	{
		return (0);
	}
	int number = atoi(argv[index]);

	if (number < 0 || !isdigit(argv[index][0]))
	{
		printf("Error\n");
		exit(1);
	}
	return (number + add_positive_recursive(argv, index + 1));
}
/**
 * main - A program that adds positive numbers
 * @argc: The arguments' counter
 * @argv: The argument's values
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	int sum = add_positive_recursive(argv, 1);

	printf("%d\n", sum);
	return (0);
}
