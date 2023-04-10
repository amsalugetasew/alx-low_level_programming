#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - Alocate memory to the the concatinated string and print it
 * @s1: first input
 * @s2: second input
 * Return: Always (Success)
 */
int **alloc_grid(int width, int height)
{
	int **s, i, j;

	s = malloc(sizeof(int *) * (height));
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else if (s != NULL)
	{
		for (i = 0; i < height; i++)
		{
			s[i] = malloc(sizeof(int) * width);
			if (s[i] == NULL)
			{
				for (j = i; j >= 0; j--)
				{
					free(s[j]);
				}
				free(s);
				return (NULL);
			}
		}
		for (i = 0; i < width; i++)
		{
			for (j = 0; j < height; j++)
			{
				s[i][j] = 0;
			}
		}
		return (s);
	}
	else
	{
		free(s);
		return (NULL);
	}
}
