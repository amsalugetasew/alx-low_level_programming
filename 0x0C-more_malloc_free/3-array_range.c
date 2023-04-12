#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *array_range - Alocate memory and creates an array of integers
 * @min: first input
 * @max: second input
 * Return: Always (Success)
 */
int *array_range(int min, int max)
{
	int *ptr, i = 0;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc((sizeof(int) * (max - min)) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
