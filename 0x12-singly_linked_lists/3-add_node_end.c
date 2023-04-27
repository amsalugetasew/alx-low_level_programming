#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *add_node_end - adds a new node at the end of a list and return it
 * @head: first input
 * @str: second input
 * Return: Always(sucess)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *temp1 = *head;
	int length = 0;

	while (str[length])
	{
		length++;
	}
	temp = malloc(sizeof(list_t));
	if (!temp)
	{
		return (NULL);
	}
	temp->str = strdup(str);
        temp->len = length;
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

