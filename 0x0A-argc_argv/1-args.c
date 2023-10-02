#include <stdio.h>
#include "main.h"
/*
 * main - a program that prints its name, followed by a new line
 * @main: as
 * @argc: arguement count
 * @argv: argument value, a strings that come after calling function
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
