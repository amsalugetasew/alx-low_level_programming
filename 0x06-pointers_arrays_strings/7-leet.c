#include "main.h"

/**
 * *leet - Prints rotated 13 strings
 * @s: first character  parameter
 * Return: Always (Success)
 */

char *leet(char *s)
{
	int i, j;
	char ch1[] = "aAeEoOtTlL";
	char ch2[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == ch1[j])
			{
				s[i] = ch2[j];
			}
		}
	}
	return (s);
}
