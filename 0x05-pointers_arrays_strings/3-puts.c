#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _puts - Prints strings 
 * @srt: char parameter
 * Return: Always (Success)
 */

void _puts(char *str)
{
	int c;
	int len = strlen(str);

	for (c = 0; c < len; c++)
	{
		_putchar((str[c]));
	}
	_putchar('\n');
}
