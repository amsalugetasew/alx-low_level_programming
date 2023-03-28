#include <string.h>
#include <stdio.h>
/**
 * puts_half - Prints the half of the string
 * @str: integer parameter
 * Return: Always (Success)
 */
void puts_half(char *str)
{
	int len = strlen(str), i;

	for (i = len / 2; i < len; i++)
	{
		putchar(*(str + i));
	}
	putchar('\n');
}
