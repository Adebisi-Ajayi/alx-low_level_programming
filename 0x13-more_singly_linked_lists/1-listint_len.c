#include "lists.h"
#include <stdio.h>
/**
 * listint_len - check the code
 * @h: the value to find
 * Return: Always 0.
 */

size_t listint_len(const listint_t *h)
{
	size_t ade = 0;

	while (h != NULL)
	{
		ade++;
		h = h->next;
	}
	return (ade);
}
