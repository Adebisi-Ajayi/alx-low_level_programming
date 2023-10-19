#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - list tobe added
 * @head: head to be counted
 * @str: strings to be counted
 * Return: nothing
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ade;

	if (str == NULL)
	{
		return (NULL);
	}
	ade = (list_t *)malloc(sizeof(list_t));

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
	ade->next = NULL;

	if (*head == NULL)
	{
		*head = ade;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = ade;
	}
	return (ade);
}
