#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - Prints strings in reverse order
 * @s: char parameter
 * Return: Always (Success)
 */

void print_rev(char *s)
{
	int c;
	int len = strlen(s);

	for (c = len - 1; c >= 0; c--)
	{
		_putchar((s[c]));
	}
	_putchar('\n');
}
