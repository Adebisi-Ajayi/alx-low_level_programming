#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - check the code
 * @head: the value to find
 * @n: iteration
 * Return: Always 0.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *adebisi;

	adebisi = malloc(sizeof(listint_t));
	if (adebisi == NULL)
	{
		return (NULL);
	}
	adebisi->n = n;
	adebisi->next = *head;

	*head = adebisi;

	return (adebisi);
}
