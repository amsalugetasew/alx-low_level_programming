#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a list
 * @h: first input
 *
 * Return: Always(sucess)
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}
	return (number);
}
