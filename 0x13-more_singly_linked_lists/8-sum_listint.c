#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * sum_listint - Find sum of list and return it
 * @head: first input
 * Return: Always(sucess)
 */
int sum_listint(listint_t *head)
{
	listint_t *temp1 = head;
	int sum = 0;

	if (!temp1)
	{
		return (0);
	}
	while (temp1)
	{
		sum += temp1->n;
		temp1 = temp1->next;
	}
	return (sum);
}
