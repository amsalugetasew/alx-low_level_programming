#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - Alocate memory to the buffer and print buffer
 * @str: first input
 * Return: Always (Success)
 */
char *_strdup(char *str)
{
	char *t;

	t = malloc(sizeof(char) * 7);
	if (t == NULL)
	{
		return (NULL);
	}
	t = strdup(str);
	return (t);
}
