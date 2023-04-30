#include "lists.h"
/**
 * *find_listint_loop - Return loop in a linked list
 * @head: first input
 * Return: Always (Success)
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp = head, *temp1 = head;

	if (!head)
	{
		return (NULL);
	}
	while (temp && temp1 && temp->next)
	{
		temp1 = temp1->next->next;
		temp = temp->next;
		if (temp1 == temp)
		{
			temp = head;
			while (temp != temp1)
			{
				temp = temp->next;
				temp1 = temp1->next;
			}
			return (temp1);
		}
	}
	return (NULL);
}
