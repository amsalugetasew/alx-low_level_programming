#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - Prints string using
 * @s: - first character parameter
 * Return: Always (Success)
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		putchar('\n');
	}
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
