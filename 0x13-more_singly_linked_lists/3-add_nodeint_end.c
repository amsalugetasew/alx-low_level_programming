#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *add_nodeint_end - adds a new node at the end of a list and return it
 * @head: first input
 * @n: second input
 * Return: Always(sucess)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *temp1 = *head;

	temp = malloc(sizeof(listint_t));
	if (!temp)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (temp1->next)
	{
		temp1 = temp1->next;
	}
	temp1->next = temp;
	return (temp);
}
