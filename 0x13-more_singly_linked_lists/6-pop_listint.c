#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - check the code
 * @head: the value to find
* Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	/**temp = *head;*/
	data = (*head)->n;
	temp = (*head)->next;
	free(head);
	*head = temp;

	return (data);
}
