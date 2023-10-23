#include "lists.h"
/**
 * free_listint_safe- check the code
 * @h: the value to find
 * Return: Always 0.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slower, *faster, *temp;
	size_t count = 0;
/*	size_t count = 1;*/

	slower = *h;
	faster = *h;

	while (slower && faster && faster->next)
	{
		slower = slower->next;
		faster = faster->next->next;

		if (slower == faster)
		{
			slower = slower->next;

			while (slower != faster)
			{
				count++;
				slower = slower->next;
			}

			slower = *h;
			while (slower != faster)
			{
				slower = slower->next;
				temp = faster->next;
				free(faster);
				faster = temp;
			}

			while (faster->next != slower)
			{
				temp = faster->next;
				free(faster);
				faster = temp;
			}
			free(faster);
			*h = NULL;
			return (count);
		}
	}
	while (*h)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
		count++;
	}
	*h = NULL;
	return (count);
}
