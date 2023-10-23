#include "lists.h"
/**
 * reverse_listint- check the code
 * @head: the value to find
 * Return: Always 0.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *noah = NULL;
	listint_t *jide = *head;

	while (jide != NULL)
	{
		listint_t *next = jide->next;

		noah = jide;
		jide = next;
	}
	*head = noah;
	return (*head);
}
