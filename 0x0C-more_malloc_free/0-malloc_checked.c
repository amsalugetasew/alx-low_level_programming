#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - Check the alocate memory
 * @b: first input
 * Return: Always (Success)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
