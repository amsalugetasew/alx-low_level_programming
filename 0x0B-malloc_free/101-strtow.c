#include <stdlib.h>
#include <stdio.h>
/**
 * len_of_word - specify length
 * @str: first input
 * Return: Always (Success)
 */
int len_of_word(char *str)
{
	int i = 0, len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}
	return (len);
}
/**
 * count_of_word - count of words
 * @str: first input
 * Return: Always (Success)
 */
int count_of_word(char *str)
{
	int i = 0, ws = 0, len = 0;

	for (i = 0; *(str + i); i++)
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			ws++;
			i += len_of_word(str + i);
		}
	}
	return (ws);
}
/**
 * **strtow - splits a string into words
 * @str: first input
 * Return: Always (Success)
 */
char **strtow(char *str)
{
	char **s;
	int i = 0, ws, w, ls, l;

	if (str == NULL || str[0] =='\0')
	{
		return (NULL);
	}
	ws = count_of_word(str);
	if (ws == 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(char *) * (ws + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (w = 0; w < ws; w++)
	{
		while (str[i] == ' ')
		{
			i++;
		}
		ls = len_of_word(str + 1);
		s[w] = malloc(sizeof(char) * (ls + 1));
		if (s[w] == NULL)
		{
			for (; w >= 0; w--)
			{
				free(s[w]);
			}
			free(s);
			return (NULL);
		}
		for (l = 0; l < ls; l++)
		{
			s[w][l] = str[i++];
		}
		s[w][l] = '\0';
	}
	s[w] = NULL;
	return (s);
}
