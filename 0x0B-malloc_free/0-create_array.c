#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - Alocate memory to the buffer and print buffer
 * @size: first input
 * @c: second input
 * Return: Always (Success)
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	else if (s != NULL)
	{
		for (i = 0; i < size; i++)
		{
			s[i] = c;
		}
		return (s);
	}
	else
	{
		return (NULL);
	}
}
