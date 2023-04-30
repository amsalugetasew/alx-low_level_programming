#include "lists.h"
/**
 * *reverse_listint - Return a  reverses of linked list
 * @head: first input
 *
 * Return: Always (Success)
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp_first = NULL, *next_temp = NULL;

	while (*head)
	{
		next_temp = (*head)->next;
		(*head)->next = temp_first;
		temp_first = (*head);
		(*head) = next_temp;
	}
	(*head) = temp_first;
	return (*head);
}
