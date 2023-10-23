#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 - check the code
 * @head: the value to find
* Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *ajayi;

	if (head == NULL)
		return;

	ajayi = *head;
	while (*head)
	{
		ajayi = *head;
		*head = (*head)->next;
		free(ajayi);
	}
	*head = NULL;
}
