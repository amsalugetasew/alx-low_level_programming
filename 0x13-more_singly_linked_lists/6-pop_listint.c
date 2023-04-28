#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * pop_listint -  delete the first data on a list
 * @head: first input
 * Return: Always(sucess)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	temp = malloc(sizeof(listint_t));
	if (!(*head) || !head)
	{
		return (0);
	}
	temp = (*head)->next;
	number = (*head)->n;	
	(*head) = temp;
	return (number);
}
