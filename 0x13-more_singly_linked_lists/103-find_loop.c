#include "lists.h"
#include <stdio.h>
/**
 * find_listint_loop - check the code
 * @head: the value to find
 * Return: Always 0.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slower = head, *faster = head;

	while (slower && faster && faster->next)
	{
		slower = slower->next;
		faster = faster->next->next;

		if (slower == faster)
		{
			return (slower);
		}
	}
	return (NULL);
}
