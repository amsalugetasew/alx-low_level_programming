#include <string.h>
#include <stdio.h>

/**
 * puts2 - Prints the value of a number and its change
 * @str: character parameter
 * Return: Always (Success)
 */

void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		putchar(*(str + i));
		i++;
	}
	putchar('\n');
}
