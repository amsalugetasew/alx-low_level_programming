#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *add_node - adds a new node at the beginning of a list and return it
 * @head: first input
 * @str: second input
 * Return: Always(sucess)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
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
	temp->next = (*head);
	(*head) = temp;
	return (*head);
}
