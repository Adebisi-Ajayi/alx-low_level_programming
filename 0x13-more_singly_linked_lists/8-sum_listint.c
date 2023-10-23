#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - check the code
 * @head: the value to find
* Return: Always 0.
 */
int sum_listint(listint_t *head)
{
	int summ = 0;

	while (head != NULL)
	{
		summ += head->n;
		head = head->next;
	}
	return (summ);
}
