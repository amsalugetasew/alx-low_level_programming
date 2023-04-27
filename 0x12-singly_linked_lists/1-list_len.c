#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns the number of elements in a linked list
 * @h: first input
 *
 * Return: Always(sucess)
 */
size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}
