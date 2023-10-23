#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end - check the code
 * @head: the value to find
 * @n: iteration
 * Return: Always 0.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *adebisi;

	adebisi = malloc(sizeof(listint_t));
	if (adebisi == NULL)
	{
		return (NULL);
	}
	adebisi->n = n;
	adebisi->next = NULL;

	if (*head == NULL)
	{
		*head = adebisi;
	}
	else
	{
		listint_t *ajayi = *head;

		while (ajayi->next != NULL)
		{
			ajayi = ajayi->next;
		}
		ajayi->next = adebisi;
	}
	return (adebisi);
}
