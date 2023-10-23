#include "lists.h"
/**
 * reverse_listint- check the code
 * @head: the value to find
 * Return: Always 0.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL, *next;

	if (*head == NULL)
		return (NULL);

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
