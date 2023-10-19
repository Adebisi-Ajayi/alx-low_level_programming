#include <stdio.h>
void adebisi(void) __attribute__((constructor));
/**
 * adebisi - a constructor
 * Return: nothing
 */
void adebisi(void) __attribute__((constructor))
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
