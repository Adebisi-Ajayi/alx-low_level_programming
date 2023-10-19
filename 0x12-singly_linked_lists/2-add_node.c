#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - node  to add
 * @ade: string to hold
 * @head: number of head to count
 * @str: number o the strings
 * Return: nothing
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ade;
	if (str == NULL)
	{
		return (NULL);
	}

	ade = malloc(sizeof(list_t));

	if (ade == NULL)
	{
		return (NULL);
	}
	ade->str = strdup(str);

	if (ade->str == NULL)
	{
		free(ade);
		return (NULL);
	}

	ade->len = (unsigned int)strlen(str);
	ade->next = *head;

	*head = ade;
	return (ade);
}
