#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints string using
 * @s: - first character parameter
 * Return: Always (Success)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s - 1);
		printf("%s\n", s);
	}
}
