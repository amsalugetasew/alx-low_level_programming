#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - Alocate memory to the the concatinated string and print it
 * @s1: first input
 * @s2: second input
 * Return: Always (Success)
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	int len1 = strlen(s1), len2 = strlen(s2), i;

	cat = malloc(sizeof(char) * (len1 + len2));
	if (cat != NULL)
	{
		for (i = 0; i < len1; i++)
		{
			cat[i] = s1[i];
		}
		for (i = 0; i < len2; i++)
                {
                        cat[i + len1] = s2[i];
                }
		return (cat);
	}
	else
	{
		return (NULL);
	}
}
