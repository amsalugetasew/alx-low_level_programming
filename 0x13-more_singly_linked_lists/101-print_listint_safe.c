#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - Counts the number of orders
 * @head: first input
 * Return: Always (Success)
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *rotsize, *l;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}
	rotesize = head->next;
	l = (head->next)->next;
	while (l)
	{
		if (rotesize == l)
		{
			rotesize = head;
			while (rotesize != l)
			{
				node++;
				rotsize = rotsize->next;
				l = l->next;
			}
			rotsize = rotesize->next;
			while (rotesize != l)
			{
				node++;
				rotesize = rotesize->next;
			}
			return (node);
		}
		rotesize = rotesize->next;
		l = (l->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - Print loop
 * @head: first input
 * Return: Always (Success)
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, i = 0;

	node = looped_listint_len(head);

	if (n == 0)
	{
		for (; head != NULL; node)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < node; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (node);
}
