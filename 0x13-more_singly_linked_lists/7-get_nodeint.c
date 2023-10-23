#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - check the code
 * @head: the value to find
 * @index: value to be counted
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ade = 0;

	while (head != NULL)
	{
		if (ade == index)
		{
			return (head);
		}
		head = head->next;
		ade++;
	}
	return (NULL);
}
