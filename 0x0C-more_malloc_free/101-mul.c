#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: number of arguments
 * @argv: arguments
 * Return: nothing
 */
int main(int argc, char **argv)
{
	int no1, no2, res;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		no1 = atoi(argv[1]);
		no2 = atoi(argv[2]);
		res = no1 * no2;
		printf("%d\n", res);
		return (0);
	}
}
