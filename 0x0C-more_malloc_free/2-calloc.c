#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - Alocate memory for an array
 * @nmemb: first input
 * @size: second input
 * Return: Always (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	j = nmemb * size;
	ptr = malloc(j);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < j)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
