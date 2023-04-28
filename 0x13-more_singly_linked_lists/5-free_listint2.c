#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_listint2 -  frees a list
 * @head: first input
 * Return: Always(sucess)
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head)
	{
		temp = (*head);
		free(head);
		(*head) = temp;
	}
}
