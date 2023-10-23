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

	while (*head != NULL)
	{
		ajayi = *head;
		*head = (*head)->next;
		free(ajayi);
	}
}
