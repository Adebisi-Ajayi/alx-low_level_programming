#include "lists.h"
#include <stdio.h>
/**
 * print_list - print the list
 * @h: string to print
 * Return: string to be printed
 */
size_t print_list(const list_t *h)
{
	size_t ade = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		ade++;
	}
	return (ade);
}
