#include "lists.h"
#include <stdio.h>
/**
 * print_listint - check the code
 * @h: the value to find
 * Return: Always 0.
 */
size_t print_listint(const listint_t *h)
{
	size_t adebisi = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		adebisi++;
	}
	return (adebisi);
}
