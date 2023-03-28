#include "main.h"
#include <string.h>
/**
 * rev_string - Prints strings in reverse order
 * @s: char parameter
 * Return: Always (Success)
 */

void rev_string(char *s)
{
	int i = 0, c;
	int len = strlen(s);
	int arr[8];

	for (c = len - 1; c >= 0; c--)
	{
		*(arr + i ) = s[c];
		i++;
	}
	for (c = 0; c <= len; c++)
	{
		*(s + c ) = *(arr + c);
	}
	putchar('\n');
}
