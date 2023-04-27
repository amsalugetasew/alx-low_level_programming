#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list
 * @h: first input
 * Return: Always(sucess)
 */
size_t print_list(const list_t *h)
{
	size_t number = 0;

	if (h->next == NULL)
	{
		printf("[0] (nil)");
	}
	else
	{
		while (h)
		{
			if (h->str == NULL)
			{
				printf("[0] (nil)\n");
			}
			else
			{
				printf("[%d] %s\n", h->len, h->str);
			}
			number++;
			h = h->next;
		}
	}
	return (number);
}
