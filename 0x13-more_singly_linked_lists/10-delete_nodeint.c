#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *delete_nodeint_at_index - inserts a new node at a given position and return it
 * @head: first input
 * @idx: second input
 * Return: Always(sucess)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp1 = *head;
	listint_t *temp = NULL;
	unsigned int i = 0;

	if (!temp1)
	{
		return (-1);
	}
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < (index - 1))
	{
		if (!temp1 && !(temp1->next))
		{
			return (-1);
		}
		temp1 = temp1->next;
		++i;
	}
	temp = temp1->next;
	temp1->next = temp->next;
	free(temp);
	return (1);
}
