#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *get_nodeint_at_index - returns the nth node of a linked list
 * @head: first input
 * @index: second input
 * Return: Always(sucess)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i = 0;

	if (!head)
	{
		return (NULL);
	}
	while (temp->next)
	{
		temp = temp->next;
		i++;
		if (i == index)
		{
			break;
		}
	}
	return (temp);
}
