#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *insert_nodeint_at_index - inserts a new node at a given position and return it
 * @head: first input
 * @idx: second input
 * @n: third input
 * Return: Always(sucess)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp1 = *head;
	listint_t *temp;
	unsigned int i = 0;

	temp = malloc(sizeof(listint_t));
	if (!temp1)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	while (temp1 && i != (idx - 1))
	{
		temp1 = temp1->next;
		++i;
	}
	temp->next = temp1->next;
	temp1->next = temp;
	return (temp);
}
