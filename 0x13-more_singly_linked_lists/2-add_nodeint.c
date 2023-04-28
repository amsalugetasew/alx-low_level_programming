#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *add_nodeint - adds a new node at the beginning of a list and return it
 * @head: first input
 * @n: second input
 * Return: Always(sucess)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (!temp)
	{
		return (NULL);
	}
	temp->n = (n);
	temp->next = (*head);
	(*head) = temp;
	return (*head);
}
