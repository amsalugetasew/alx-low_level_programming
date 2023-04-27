#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_list -  frees a list
 * @head: first input
 *
 * Return: Always(sucess)
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
